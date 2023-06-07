#ifndef REPLACE_HPP
#define REPLACE_HPP
#include <string>
#include <iostream>
#include <fstream>

class Replace
{
public:
    Replace(std::string inputFileName, std::string value, std::string replacement);
    ~Replace();

private:
    std::string value;
    std::string replacement;
    std::string inputFileName;
    std::string ReplaceInLine(std::string line);

public:
    void CopyAndReplace();
};
#endif