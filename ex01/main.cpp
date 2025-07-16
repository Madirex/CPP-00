/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmateo- <anmateo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 12:33:19 by anmateo-          #+#    #+#             */
/*   Updated: 2025/07/16 12:33:19 by anmateo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

static void displayWelcome(void)
{
	std::cout << "=================================" << std::endl;
	std::cout << "   Welcome to My Awesome PhoneBook!" << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << "Available commands:" << std::endl;
	std::cout << "  ADD    - Add a new contact" << std::endl;
	std::cout << "  SEARCH - Search and display contacts" << std::endl;
	std::cout << "  EXIT   - Exit the program" << std::endl;
	std::cout << "=================================" << std::endl;
}

static void processCommand(PhoneBook& phoneBook, const std::string& command)
{
	if (command == "ADD")
		phoneBook.addContact();
	else if (command == "SEARCH")
		phoneBook.searchContact();
	else if (command == "EXIT")
	{
		std::cout << "Goodbye! Your contacts are lost forever..." << std::endl;
		exit(0);
	}
	else if (!command.empty())
		std::cout << "Unknown command. Please use ADD, SEARCH, or EXIT." << std::endl;
}

int main(void)
{
	PhoneBook phoneBook;
	std::string command;
	
	displayWelcome();
	
	while (true)
	{
		std::cout << std::endl << "Enter command: ";
		std::getline(std::cin, command);
		
		if (std::cin.eof())
		{
			std::cout << std::endl << "EOF detected. Exiting..." << std::endl;
			break;
		}
		
		processCommand(phoneBook, command);
	}
	
	return (0);
}