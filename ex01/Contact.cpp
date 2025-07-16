/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <anmateo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:32:46 by anmateo-          #+#    #+#             */
/*   Updated: 2025/07/16 12:32:46 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iomanip>

// Constructor
Contact::Contact(void)
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
}

// Destructor
Contact::~Contact(void)
{
}

// Setters
void Contact::setFirstName(const std::string& firstName)
{
	this->_firstName = firstName;
}

void Contact::setLastName(const std::string& lastName)
{
	this->_lastName = lastName;
}

void Contact::setNickname(const std::string& nickname)
{
	this->_nickname = nickname;
}

void Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

// Getters
std::string Contact::getFirstName(void) const
{
	return this->_firstName;
}

std::string Contact::getLastName(void) const
{
	return this->_lastName;
}

std::string Contact::getNickname(void) const
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}

// Utility functions
bool Contact::isEmpty(void) const
{
	return (this->_firstName.empty() && this->_lastName.empty() && 
			this->_nickname.empty() && this->_phoneNumber.empty() && 
			this->_darkestSecret.empty());
}

void Contact::displayContact(void) const
{
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
}

std::string Contact::formatField(const std::string& field) const
{
	if (field.length() > 10)
		return field.substr(0, 9) + ".";
	return field;
}