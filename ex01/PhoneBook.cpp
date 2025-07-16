/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <anmateo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:39:33 by anmateo-          #+#    #+#             */
/*   Updated: 2025/07/16 12:39:33 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <sstream>
#include <limits>
#include <cstdlib>

// Constructor
PhoneBook::PhoneBook(void)
{
	this->_contactCount = 0;
	this->_nextIndex = 0;
}

// Destructor
PhoneBook::~PhoneBook(void)
{
}

// Main functionality
void PhoneBook::addContact(void)
{
	Contact newContact;
	
	std::cout << "Adding a new contact..." << std::endl;
	
	// Get contact information
	std::string firstName = this->getValidInput("Enter first name: ");
	std::string lastName = this->getValidInput("Enter last name: ");
	std::string nickname = this->getValidInput("Enter nickname: ");
	std::string phoneNumber = this->getValidInput("Enter phone number: ");
	std::string darkestSecret = this->getValidInput("Enter darkest secret: ");
	
	// Set contact data
	newContact.setFirstName(firstName);
	newContact.setLastName(lastName);
	newContact.setNickname(nickname);
	newContact.setPhoneNumber(phoneNumber);
	newContact.setDarkestSecret(darkestSecret);
	
	// Add to phonebook
	this->_contacts[this->_nextIndex] = newContact;
	this->_nextIndex = (this->_nextIndex + 1) % MAX_CONTACTS;
	
	if (this->_contactCount < MAX_CONTACTS)
		this->_contactCount++;
	
	std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContact(void)
{
	if (this->_contactCount == 0)
	{
		std::cout << "No contacts available. Please add a contact first." << std::endl;
		return;
	}
	
	this->displayContactsList();
	
	std::cout << "Enter the index of the contact to display: ";
	int index = this->getValidIndex();
	
	if (this->isValidIndex(index))
		this->displayContactDetails(index);
	else
		std::cout << "Invalid index. Please try again." << std::endl;
}

void PhoneBook::displayContactsList(void) const
{
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	
	std::cout << "-----------|-----------|-----------|----------" << std::endl;
	
	for (int i = 0; i < this->_contactCount; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << this->_contacts[i].formatField(this->_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << this->_contacts[i].formatField(this->_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << this->_contacts[i].formatField(this->_contacts[i].getNickname()) << std::endl;
	}
}

void PhoneBook::displayContactDetails(int index) const
{
	std::cout << std::endl << "Contact Details:" << std::endl;
	std::cout << "=================" << std::endl;
	this->_contacts[index].displayContact();
	std::cout << std::endl;
}

// Utility functions
bool PhoneBook::isValidIndex(int index) const
{
	return (index >= 0 && index < this->_contactCount);
}

int PhoneBook::getContactCount(void) const
{
	return this->_contactCount;
}

// Input validation
std::string PhoneBook::getValidInput(const std::string& prompt) const
{
	std::string input;
	
	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		
		if (std::cin.eof())
		{
			std::cout << std::endl << "EOF detected. Exiting..." << std::endl;
			exit(0);
		}
		
		if (input.empty())
			std::cout << "Field cannot be empty. Please try again." << std::endl;
		
	} while (input.empty());
	
	return input;
}

int PhoneBook::getValidIndex(void) const
{
	std::string input;
	int index;
	
	while (true)
	{
		std::getline(std::cin, input);
		
		if (std::cin.eof())
		{
			std::cout << std::endl << "EOF detected. Exiting..." << std::endl;
			exit(0);
		}
		
		if (input.empty())
		{
			std::cout << "Please enter a valid index: ";
			continue;
		}
		
		std::stringstream ss(input);
		if (ss >> index && ss.eof())
		{
			return index;
		}
		
		std::cout << "Invalid input. Please enter a number: ";
	}
}