
#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

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

    outputfile << "                                               ." << std::endl;
    outputfile << "                                  .         ;" << std::endl;
    outputfile << "      .              .              ;%     ;;" << std::endl;
    outputfile << "        ,           ,                :;%  %;" << std::endl;
    outputfile << "         :         ;                   :;%;'     .," << std::endl;
    outputfile << ",.        %;     %;            ;        %;'    ,;" << std::endl;
    outputfile << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
    outputfile << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
    outputfile << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
    outputfile << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
    outputfile << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
    outputfile << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
    outputfile << "           `@%:.  :;%.         ;@@%;'" << std::endl;
    outputfile << "             `@%.  `;@%.      ;@@%;" << std::endl;
    outputfile << "               `@%%. `@%%    ;@@%;" << std::endl;
    outputfile << "                 ;@%. :@%%  %@@%;" << std::endl;
    outputfile << "                   %@bd%%%bd%%:;" << std::endl;
    outputfile << "                     #@%%%%%:;;" << std::endl;
    outputfile << "                     %@@%%%::;" << std::endl;
    outputfile << "                     %@@@%(o);  . '" << std::endl;
    outputfile << "                     %@@@o%;:(.,'" << std::endl;
    outputfile << "                 `.. %@@@o%::;" << std::endl;
    outputfile << "                    `)@@@o%::;" << std::endl;
    outputfile << "                     %@@(o)::;" << std::endl;
    outputfile << "                    .%@@@@%::;" << std::endl;
    outputfile << "                    ;%@@@@%::;." << std::endl;
    outputfile << "                   ;%@@@@%%:;;;." << std::endl;
    outputfile << "               ...;%@@@@@%%:;;;;,..    " << std::endl;
    outputfile  <<"------------------------------------------------" << std::endl;
    outputfile << "----------- " << executor << " -----------" << std::endl;
    outputfile  <<"------------------------------------------------" << std::endl;
    outputfile.close();
}