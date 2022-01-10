#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"
# include <stdlib.h>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm();
		FORM_FACTORY(RobotomyRequestForm);

		RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );
		virtual void				execute(Bureaucrat const &executor) const throw(Form::GradeTooLowException, Form::IsUnsignedException);

	private:
		std::string _target;
};

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i );

#endif /* ******************************************* ROBOTOMYREQUESTFORM_H */