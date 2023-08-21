#include "BitcoinExchange.hpp"

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
	load_data();
	load_input_file();
	// for (std::map<std::string, double>::iterator i = this->data.begin(); i != this->data.end(); i++)
	// {
	// 	std::cout << i->first  << " : " << i->second << std::endl;
	// }
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
	date m_date;

	while (std::getline(this->input_file, line))
	{
		m_stream.str(line);
		m_stream >> str_date >> sep >> value;
		try
		{
			m_date = valide_date_formate(str_date);
			if (!value.empty())
				btc_value = atof(value.c_str());
			std::cout << str_date << " => "
					  << btc_value << " * " << this->data[str_date]
					  << " = " << this->data[str_date] * btc_value << std::endl;
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

void range(int value, int min, int max)
{
	if (value > max || value < min)
		throw std::runtime_error("date value is out of range");
}

date valide_date_formate(std::string str)
{
	date m_Date;
	std::istringstream ss(str);
	char dash[2];
	ss >> m_Date.year >> dash[0] >> m_Date.month >> dash[1] >> m_Date.day;
	if (dash[0] != '-' || dash[1] != '-')
		throw std::runtime_error("invalide Date Formate");
	range(m_Date.year, 0, 2023);
	range(m_Date.month, 0, 12);
	range(m_Date.day, 0, 31);
	return (m_Date);
}