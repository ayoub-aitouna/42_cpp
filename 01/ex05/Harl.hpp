#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>
#include <map>
#include <functional>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain(std::string level);

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    std::map<std::string, void (Harl::*)()> m_complains_list;
};
#endif