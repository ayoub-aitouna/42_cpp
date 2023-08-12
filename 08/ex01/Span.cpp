#include "Span.hpp"

Span::Span() : N(0)
{
}

Span::Span(unsigned int N) : N(N)
{
}

Span::Span(Span &lhs)
{
	*this = lhs;
}

Span &Span::operator=(const Span &lhs)
{
	if (this != &lhs)
	{
		this->N = lhs.N;
		for (size_t i = 0; i < lhs.container.size(); i++)
			this->container.push_back(lhs.container.at(i));
	}
	return (*this);
}

void Span::sort()
{
	std::sort(container.begin(), container.end());
}

void Span::addNumber(int number)
{
	if (container.size() >= N)
		throw std::runtime_error("index out of bound exception");
	container.push_back(number);
	sort();
}

void Span::addNumber(std::vector<int>::iterator beign, std::vector<int>::iterator end)
{
	if (container.size() >= N)
		throw std::runtime_error("index out of bound exception");
	this->container.assign(beign, end);
	sort();
}

int Span::shortestSpan()
{
	int shortest_value = std::numeric_limits<int>::max();
	int tmp = 0;
	if (container.size() == 1)
		throw std::runtime_error("invalide number of numbers");
	for (std::vector<int>::iterator i = this->container.begin(); i < this->container.end() - 1; i++)
	{
		tmp = *(i + 1) - *i;
		if (tmp < shortest_value)
			shortest_value = tmp;
	}
	return (shortest_value);
}
int Span::longestSpan()
{
	if (container.size() == 1)
		throw std::runtime_error("invalide number of numbers");
	return (this->container.at(this->container.size() - 1) - this->container.at(0));
}

Span ::~Span()
{
}
