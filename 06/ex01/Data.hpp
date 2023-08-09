#ifndef DATA_HPP
# define DATA_HPP
# include <ostream>
# include <string>

class Data
{
  public:
	Data();
	Data(int age, std::string name, std::string username);
	Data(Data &lhs);
	Data &operator=(const Data &lhs);
	~Data();

  public:
	int getAge() const;
	std::string getName() const;
	std::string getUserName() const;

  private:
	int age;
	std::string name;
	std::string username;
};

std::ostream &operator<<(std::ostream &os, const Data &lhs);
#endif