#include "ShrubberyCreationForm.hpp"
#include <fstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{
	#ifdef DEBUG
		std::cout << "<ShrubberyCreationForm> Constructor" << std::endl;
	#endif // DEBUG
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm & src ) :
	Form(src),
	_target(src._target)
{
	#ifdef DEBUG
		std::cout << "<ShrubberyCreationForm> Copy Constructor" << std::endl;
	#endif // DEBUG
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	#ifdef DEBUG
		std::cout << "<ShrubberyCreationForm> Destructor" << std::endl;
	#endif // DEBUG
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	#ifdef DEBUG
		std::cout << "<ShrubberyCreationForm> Assignation Operator" << std::endl;
	#endif // DEBUG
	if (this == &rhs)
		return (*this);
	Form::operator=(rhs);
	this->_target = rhs._target;	return (*this);
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void
	ShrubberyCreationForm::execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException, Form::IsUnsignedException)
{
	#ifdef DEBUG
		std::cout << "<PresidentialPardonForm> Execute form" << std::endl;
	#endif // DEBUG
	Form::execute(executor);
	std::ofstream f;
	f.open(std::string(this->_target + "_shrubbery").c_str());
	if (f.is_open()) {
		f << "                                              ." << std::endl;
		f << "                                   .         ;" << std::endl;
		f << "      .              .              ;%     ;;" << std::endl;
		f << "        ,           ,                :;%  %;" << std::endl;
		f << "         :         ;                   :;%;'     .," << std::endl;
		f << ",.        %;     %;            ;        %;'    ,;" << std::endl;
		f << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
		f << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl;
		f << "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl;
		f << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
		f << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
		f << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
		f << "           `@%:.  :;%.         ;@@%;'" << std::endl;
		f << "             `@%.  `;@%.      ;@@%;" << std::endl;
		f << "               `@%%. `@%%    ;@@%;" << std::endl;
		f << "                 ;@%. :@%%  %@@%;" << std::endl;
		f << "                   %@bd%%%bd%%:;" << std::endl;
		f << "                     #@%%%%%:;;" << std::endl;
		f << "                     %@@%%%::;" << std::endl;
		f << "                     %@@@%(o);  . '" << std::endl;
		f << "                     %@@@o%;:(.,'" << std::endl;
		f << "                 `.. %@@@o%::;" << std::endl;
		f << "                    `)@@@o%::;" << std::endl;
		f << "                     %@@(o)::;" << std::endl;
		f << "                    .%@@@@%::;" << std::endl;
		f << "                    ;%@@@@%::;." << std::endl;
		f << "                   ;%@@@@%%:;;;." << std::endl;
		f << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	}
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */