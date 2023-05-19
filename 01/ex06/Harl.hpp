#ifndef HARL_HPP
#define HARL_HPP
#include <string>
#include <iostream>
#include <map>
#include <functional>

class Harl
{
public:
    Harl(std::string filter);
    ~Harl();
    void complain(std::string level);

private:
    typedef void (Harl::*harl_voice)();
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    std::string filter;
    std::string level;
    std::map<std::string, int> levels;
    std::map<std::string, harl_voice> m_complains_list;
};
#endif