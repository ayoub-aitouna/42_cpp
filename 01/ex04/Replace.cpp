#include "Replace.hpp"

Replace::Replace(std::string inputFileName, std::string value, std::string replacement)
{
    this->inputFileName = inputFileName;
    this->value = value;
    this->replacement = replacement;
}

Replace::~Replace()
{
}

std::string Replace::ReplaceInLine(std::string line)
{
    std::string tmp;
    std::string result;
    for (size_t i = 0; i < line.length(); i++)
    {
        tmp += line[i];
        if (tmp == value)
        {
            result += replacement;
            tmp.clear();
        }
        else if (tmp.length() >= value.length())
        {
            result += tmp.at(0);
            tmp.erase(tmp.begin());
        }
    }
    result += tmp;
    return (result);
}

void Replace::CopyAndReplace()
{
    std::ifstream inputFile(inputFileName.c_str());
    std::string line;

    if (!inputFile.is_open() || !inputFile.good())
    {
        std::cout << "error trying to open a inputFile" << std::endl;
        return;
    }
    std::ofstream outputFile((inputFileName + ".replace").c_str());
    if (!outputFile.is_open())
    {
        std::cout << "error trying to open a outputFile" << std::endl;
        return;
    }

    while (std::getline(inputFile, line))
    {
        line += inputFile.peek() != EOF ? "\n" : "";
        outputFile << ReplaceInLine(line);
    }
    inputFile.close();
    outputFile.close();
}
