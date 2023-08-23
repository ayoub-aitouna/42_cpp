#include "BitcoinExchange.hpp"
#include <climits>

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string file_name)
{
	this->input_file.open(file_name.c_str());
	if (!this->input_file.is_open())
	{
		std::cout << "couldn't open a file " << std::endl;
		exit(1);
	}
	init_months_days();
	load_data();
	load_input_file();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &lhs)
{
	*this = lhs;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &lhs)
{

	if (this != &lhs)
	{
		/* copy operator code*/
	}
	return (*this);
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
		exit(1);
	}
	while (std::getline(data_file, line))
	{

		std::string date;
		std::string value;
		m_stream.str(line);
		std::getline(m_stream, date, ',');
		std::getline(m_stream, value);
		try
		{
			valide_date_formate(date);
			if (!value.empty())
				this->data[date] = atof(value.c_str());
		}
		catch (const std::exception &e)
		{
		}
		m_stream.clear();
	}
}

void BitcoinExchange::load_input_file()
{
	std::string line;
	std::string str_date;
	std::string sep;
	std::string value;
	double btc_value;
	std::istringstream m_stream;

	while (std::getline(this->input_file, line))
	{
		m_stream.str(line);
		m_stream >> str_date >> sep >> value;
		try
		{
			check_formate("dddd-dd-dd | f", line);
			valide_date_formate(str_date);
			btc_value = atof(value.c_str());
			range(btc_value, 0.0, 1000.0);
			std::map<std::string, double>::iterator it = this->data.lower_bound(str_date);
			if (it->first != str_date)
				it--;
			std::cout << str_date << " => "
					  << it->second * btc_value << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		m_stream.clear();
	}
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::valide_date_formate(std::string str)
{
	date m_Date;
	std::istringstream ss(str);
	char dash;
	ss >> m_Date.year >> dash >> m_Date.month >> dash >> m_Date.day;
	range(m_Date.year, 2009, INT_MAX);
	range(m_Date.month, 1, 12);
	if (m_Date.month == 2)
	{
		if (m_Date.year % 4 == 0 && m_Date.year % 100 == 0 && m_Date.year % 400 == 0)
			range(m_Date.day, 1, 29);
		else
			range(m_Date.day, 1, 28);
	}
	else
		range(m_Date.day, 1, this->months_days[m_Date.month]);
}

void check_formate(std::string formate, std::string str)
{
	for (size_t i = 0; i < formate.size(); i++)
	{
		if (formate[i] == 'd')
		{
			if (!std::isdigit(str[i]))
				throw std::runtime_error("Error: bad input => " + str);
		}
		else if (formate[i] == 'f')
		{
			if (!is_double(&str[i]))
				throw std::runtime_error("Error: bad input => " + str);
		}
		else
		{
			if (formate[i] != str[i])
				throw std::runtime_error("Error: bad input => " + str);
		}
	}
}

bool is_double(std::string str)
{
	bool dot = false;
	std::string::iterator it = str.begin();
	if (*it == '-' || *it == '+')
		it++;
	while (it != str.end())
	{
		if (*it == '.')
		{
			if (dot)
				return false;
			dot = true;
		}
		else if (!std::isdigit(*it))
			return false;
		it++;
	}
	return (true);
}

void BitcoinExchange::init_months_days()
{
	this->months_days[1] = 31;
	this->months_days[3] = 31;
	this->months_days[4] = 30;
	this->months_days[5] = 31;
	this->months_days[6] = 30;
	this->months_days[7] = 31;
	this->months_days[8] = 31;
	this->months_days[9] = 30;
	this->months_days[10] = 31;
	this->months_days[11] = 30;
	this->months_days[12] = 31;
}