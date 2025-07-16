/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <anmateo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:20:32 by anmateo-          #+#    #+#             */
/*   Updated: 2025/07/16 12:20:32 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;

public:
	Contact(void);
	
	~Contact(void);

	void	setFirstName(const std::string& firstName);
	void	setLastName(const std::string& lastName);
	void	setNickname(const std::string& nickname);
	void	setPhoneNumber(const std::string& phoneNumber);
	void	setDarkestSecret(const std::string& darkestSecret);

	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getNickname(void) const;
	std::string	getPhoneNumber(void) const;
	std::string	getDarkestSecret(void) const;

	bool		isEmpty(void) const;
	void		displayContact(void) const;
	std::string	formatField(const std::string& field) const;
};

#endif