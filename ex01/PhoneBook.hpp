/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <anmateo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:39:37 by anmateo-          #+#    #+#             */
/*   Updated: 2025/07/16 12:39:37 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

class PhoneBook
{
private:
	static const int	MAX_CONTACTS = 8;
	Contact				_contacts[MAX_CONTACTS];
	int					_contactCount;
	int					_nextIndex;

public:
	PhoneBook(void);
	
	~PhoneBook(void);

	void	addContact(void);
	void	searchContact(void);
	void	displayContactsList(void) const;
	void	displayContactDetails(int index) const;

	bool	isValidIndex(int index) const;
	int		getContactCount(void) const;
	
	std::string	getValidInput(const std::string& prompt) const;
	int			getValidIndex(void) const;
};

#endif