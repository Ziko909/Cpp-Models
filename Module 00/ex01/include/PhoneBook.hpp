/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaabou <zaabou@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:31:53 by zaabou            #+#    #+#             */
/*   Updated: 2022/11/25 06:14:18 by zaabou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include <Contact.hpp>

class PhoneBook{
	private :
		Contact	list[8];
		short	size;
		short	av_place;
	public :
			PhoneBook(void);
	void	creat_new_contact();
	void	search();
	void	show_list();
	void	show_contact(int index);
};
#endif