#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm();
		FORM_FACTORY(ShrubberyCreationForm);

		ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs );
		virtual void				execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException, Form::IsUnsignedException);

	private:
		std::string _target;
};

std::ostream &			operator<<( std::ostream & o, ShrubberyCreationForm const & i );

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */