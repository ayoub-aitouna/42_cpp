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
    std::ifstream input_file;
    std::ifstream data_file;
    void load_data();
    
public:
    // public members here
};

#endif
