/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:09:23 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/10 19:44:02 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat const &src);
		virtual ~Bureaucrat();

		Bureaucrat &		operator = (Bureaucrat const &rhs);
        bool 				operator > (int i) const;
        bool 				operator < (int i) const;

		const std::string	getName(void) const;
		int					getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form *form) const;
		void				executeForm(Form const &form) const;

		class GradeTooHightException : public std::exception {
			public: // We could set the class as struct instead of this
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		const static int	max_grade = 1;
		const static int	min_grade = 150;

	private:
		const std::string	_name;
		int					_grade;
		void				_setGrade(int value) throw(Bureaucrat::GradeTooHightException, Bureaucrat::GradeTooLowException);
};

std::ostream &			operator << (std::ostream &o, Bureaucrat const &i);

#endif /* ****************************************************** BUREAUCRAT_H */