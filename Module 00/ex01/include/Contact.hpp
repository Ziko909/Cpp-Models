/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:38:01 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/25 06:20:01 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <string>
# include <iomanip>
# include <iostream>

class Contact{
	private :
		std::string	first_name;  
		std::string	last_name;  
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
	public :
		void		set_info(void);
		std::string	get_info(int n);
};
# endif