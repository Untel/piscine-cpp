/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <adda-sil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 19:09:07 by adda-sil          #+#    #+#             */
/*   Updated: 2022/01/08 19:45:16 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Form
{
	public:
		Form(std::string name, int grade);
		Form(std::string name);
		Form( Form const & src );
		virtual ~Form();

		Form &				operator=( Form const & rhs );

		void				beSigned(Bureaucrat *signer);
		void				signForm(Bureaucrat *signer);

		const std::string	getName(void) const;
		int					getSignGrade(void) const;
		int					getExecuteGrade(void) const;
		bool				isSigned(void) const;

		class GradeTooHightException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class StillSignedException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string	_name;
		const int			_sign_grade;
		const int			_execute_grade;
		bool				_is_signed;
};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ****************************************************** Form_H */