#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <cstdlib>

struct date
{
    int year;
    int month;
    int day;
};

class BitcoinExchange
{
public:
    BitcoinExchange();
    BitcoinExchange(std::string file_name);
    BitcoinExchange(BitcoinExchange &lhs);
    BitcoinExchange &operator=(const BitcoinExchange &lhs);
    ~BitcoinExchange();

private:
    std::map<std::string, double> data;
    std::map<int, int> months_days;
    std::ifstream input_file;
    void load_data();
    void init_months_days();
    void load_input_file();
    void valide_date_formate(std::string str);

public:
    // public members here
};

template <typename T>
void range(T value, T min, T max)
{
    if (value > max || value < min)
        throw std::runtime_error("value is out of range");
}

bool is_double(std::string str);
void check_formate(std::string str, std::string formate);
#endif
