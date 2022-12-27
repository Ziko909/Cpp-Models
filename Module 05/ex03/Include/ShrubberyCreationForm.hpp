/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 18:30:07 by zaabou            #+#    #+#             */
/*   Updated: 2022/12/27 18:30:09 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHRUBBERYCREATIONFORM_HPP
#define	SHRUBBERYCREATIONFORM_HPP

#define AsciiTree " \
                                  # #### ####\n \
                                ### \\/#|### |/####\n \
                               ##\\/#/ \\||/##/_/##/_#\n \
                             ###  \\/###|/ \\/ # ###\n \
                           ##_\\_#\\_\\## | #/###_/_####\n \
                          ## #### # \\ #| /  #### ##/##\n \
                           __#_--###`  |{,###---###-~\n \
                                     \\ }{\n \
                                      }}{\n \
                                      }}{\n \
                                      {{}\n \
                                , -=-~{ .-^- _\n \
                                      `} \n \
                                       { \
				"

#include <AForm.hpp>
#include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private :
		std::string	mTarget;

	public :
								            ShrubberyCreationForm();
								            ShrubberyCreationForm(std::string name);
								            ShrubberyCreationForm( const ShrubberyCreationForm& obj );
		ShrubberyCreationForm&  operator = ( const ShrubberyCreationForm& rhs );
								            ~ShrubberyCreationForm();
		std::string				      getTarget( void ) const;
		void					          execute(Bureaucrat const & executor) const;
};
#endif