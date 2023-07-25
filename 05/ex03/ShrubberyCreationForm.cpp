
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("<target>", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &lhs) : AForm(lhs)
{
    *this = lhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &lhs)
{
    if (this != &lhs)
        AForm::operator=(lhs);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    check_permisions(executor);
    std::string fileName = this->getName() + "_shrubbery";
    std::ofstream outputfile(fileName.c_str());
    if (!outputfile.is_open())
        throw ShrubberyCreationForm::FileException();
    outputfile << "                      ___" << std::endl;
    outputfile << "                _,-'\"\"   \"\"\"\"`--." << std::endl;
    outputfile << "             ,-'          __,,-- \\" << std::endl;
    outputfile << "           ,\'    __,--\"\"\"\"dF      )" << std::endl;
    outputfile << "          /   .-\"Hb_,--\"\"dF      /" << std::endl;
    outputfile << "        ,\'       _Hb ___dF\"-._,-'" << std::endl;
    outputfile << "      ,'      _,-\"\"\"\"   \"\"--..__" << std::endl;
    outputfile << "     (     ,-'                  `." << std::endl;
    outputfile << "      `._,'     _   _             ;" << std::endl;
    outputfile << "       ,'     ,' `-'Hb-.___..._,-'" << std::endl;
    outputfile << "       \\    ,'\"Hb.-\'HH`-.dHF\"" << std::endl;
    outputfile << "        `--\'   \"Hb  HH  dF\"" << std::endl;
    outputfile << "                \"Hb HH dF" << std::endl;
    outputfile << "                 \"HbHHdF" << std::endl;
    outputfile << "                  |HHHF" << std::endl;
    outputfile << "                  |HHH|" << std::endl;
    outputfile << "                  |HHH|" << std::endl;
    outputfile << "                  |HHH|" << std::endl;
    outputfile << "                  |HHH|" << std::endl;
    outputfile << "                  dHHHb" << std::endl;
    outputfile << "                .dFd|bHb.               o" << std::endl;
    outputfile << "      o       .dHFdH|HbTHb.          o /" << std::endl;
    outputfile << "\\  Y  |  \\__,dHHFdHH|HHhoHHb.__Krogg  Y" << std::endl;
    outputfile << "##########################################" << std::endl;
    outputfile.close();
}