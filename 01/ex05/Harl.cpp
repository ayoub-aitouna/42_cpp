
#include "Harl.hpp"

Harl::Harl()
{
    m_complains_list["DEBUG"] = &Harl::debug;
    m_complains_list["INFO"] = &Harl::info;
    m_complains_list["WARNING"] = &Harl::warning;
    m_complains_list["ERROR"] = &Harl::error;
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
    std::cout << "[" << level << "]" << std::endl;
    harl_voice complain = m_complains_list[level];
    (this->*complain)();
    std::cout << std::endl;
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special"
                 "-ketchup burger. I really do!"
              << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough"
                 "bacon in my burger! If you did, I wouldn't be asking for more !"
              << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for"
                 "years whereas you started working here since last month."
              << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
