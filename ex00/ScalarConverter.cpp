/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:21:39 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 15:20:21 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

ScalarConverter::ScalarConverter(void) {
	return;
}

ScalarConverter::~ScalarConverter(void) {
	return;
}


bool	ScalarConverter::isChar(std::string const &input) {
	if (input.length() == 1 && !std::isdigit(input[0]))
		return true;
	return false;
}

bool	ScalarConverter::isInt(std::string const &input) {
	unsigned long i = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	while (i < input.length())
	{
		if (!std::isdigit(input[i]))
			return false;
		i++;
	}
	return true;
}

bool	ScalarConverter::isFloat(std::string const &input) {
	int	dot = 0;
	unsigned long i = 0;
	if (input[i] == '+' || input[i] == '-')
		i++;
	std::string tmp = input.substr(i, input.length() - i);
	if (tmp == "nanf" || tmp == "inff")
		return true;
	while (i < input.length())
	{
		if (input[i] == '.')
			dot++;
		if (!std::isdigit(input[i]) && input[i] != '.')
			break;
		i++;
	}
	if (dot	!= 1 && dot != 0)
		return false;
	if (input[i] == 'f' && input[i + 1] == '\0')
		return true;
	return false;
}

bool	ScalarConverter::isDouble(std::string const &input) {
	int	dot = 0;
	unsigned long i = 0;

	if (input[0] == '+' || input[0] == '-')
		i++;
	std::string tmp = input.substr(i, input.length() - i);
	if (tmp == "nan" || tmp == "inf")
		return true;
	while (i < input.length())
	{
		if (input[i] == '.')
			dot++;
		if (!std::isdigit(input[i]) && input[i] != '.')
			return false;
		i++;
	}
	if (dot	== 1)
		return true;
	return false;
}

void	ScalarConverter::convertFromChar(std::string const &input){
	std::cout << "char: " << input[0] << std::endl;
	std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(input[0]) << std::endl;
	std::cout << "double: " << static_cast<double>(input[0]) << std::endl;	
}

void	ScalarConverter::convertFromInt(std::string const &input){
	try {
		int	tmp = std::stoi(input);
		if (std::isprint(tmp) == 0)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(tmp) << std::endl;
		std::cout << "int: " << tmp << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(tmp) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(tmp) << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Invalid input: " << e.what() << std::endl;
	}
}

void	ScalarConverter::convertFromDouble(std::string const &input){
	try {
		double	tmp = std::stod(input);
		int		tmpInt = static_cast<int>(tmp);
		if (input == "nan" || input == "+inf" || input == "-inf" || input == "inf") {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else {
			if (std::isprint(tmpInt) == 0)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(tmpInt) << std::endl;
			std::cout << "int: " << tmpInt << std::endl;
		}
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(tmp) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(tmp) << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Invalid input: " << e.what() << std::endl;
	}
}

void	ScalarConverter::convertFromFloat(std::string const &input){
	try {
		float	tmp = std::stod(input);
		int		tmpInt = static_cast<int>(tmp);
		if (input == "nanf" || input == "+inff" || input == "-inff" || input == "inff") {
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else {
			if (std::isprint(tmpInt) == 0)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(tmpInt) << std::endl;
			std::cout << "int: " << tmpInt << std::endl;
		}
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(tmp) << "f" << std::endl;
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(tmp) << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Invalid input: " << e.what() << std::endl;
	}
}

void	ScalarConverter::convert(std::string const &input) {
	if (ScalarConverter::isChar(input))
		ScalarConverter::convertFromChar(input);
	else if (ScalarConverter::isInt(input))
		ScalarConverter::convertFromInt(input);
	else if (ScalarConverter::isFloat(input))
		ScalarConverter::convertFromFloat(input);
	else if (ScalarConverter::isDouble(input))
		ScalarConverter::convertFromDouble(input);
	else
		std::cout << "Invalid input" << std::endl;
}
