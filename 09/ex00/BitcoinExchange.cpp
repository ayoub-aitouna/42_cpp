#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string file_name)
{
	(void)file_name;
	load_data();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &lhs)
{
	*this = lhs;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &lhs)
{
#include <sstream>

	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
}

int get_value(std::string token, int min, int max)
{
	int value;
	if (!token.empty())
		throw std::runtime_error("invalide Date Formate");
	value = atoi(token.c_str());
	if (value > max || value < min)
		throw std::runtime_error("date value is out of range");
	return value;
}

void BitcoinExchange::load_data()
{
	std::ifstream data_file("data.csv");
	std::string line;
	std::istringstream m_stream;

	if (!data_file.is_open())
	{
		std::cout << "Download Necessary Files and include them in the Makefile derectory \n"
					 "Files URL : https://cdn.intra.42.fr/document/document/16358/cpp_09.tgz"
				  << std::endl;
	}
	while (std::getline(data_file, line))
	{

		std::string date;
		std::string value;
		std::cout << line << std::endl;
		m_stream.str(line);
		std::getline(m_stream, date, ',');
		std::getline(m_stream, value);
		if(check_formate())
		this->data[date] = atof(value.c_str());
	}
}

BitcoinExchange::~BitcoinExchange()
{
}

void f()
{

	date m_date;
	std::istringstream m_stream;
	std::string token;
	std::string line;

	std::cout << line << std::endl;
	m_stream.str(line);

	std::getline(m_stream, token, '-');
	m_date.year = get_value(token, 0, 2023);

	std::getline(m_stream, token, '-');
	m_date.month = get_value(token, 0, 12);

	std::getline(m_stream, token, '-');
	m_date.day = get_value(token, 0, 31);
}