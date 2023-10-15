/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:21:39 by soma              #+#    #+#             */
/*   Updated: 2023/10/15 22:55:22 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

ScalarConverter::ScalarConverter(void) {
	return;
}

ScalarConverter::~ScalarConverter(void) {
	return;
}


bool	ScalarConverter::isInt(std::string const &input) {
	for (unsigned long i = 0; i < input.length(); i++)
	{
		if (!isdigit(input[i]))
			return false;
	}
	return true;
}

bool	ScalarConverter::isFloat(std::string const &input) {
	int	dot = 0;
	unsigned long i = 0;
	while (i < input.length())
	{
		if (input[i] == '.')
			dot++;
		if (!isdigit(input[i]) && input[i] != '.')
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
	for (unsigned long i = 0; i < input.length(); i++)
	{
		if (input[i] == '.')
			dot++;
		if (!isdigit(input[i]) && input[i] != '.')
			return false;
	}
	if (dot	== 1)
		return true;
	return false;
}

void	ScalarConverter::convert(std::string const &input) {
	
	if (input.length() == 1 && !isdigit(input[0]))
	{
		std::cout << "char: " << input[0] << std::endl;
		std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(input[0]) << std::endl;
		std::cout << "double: " << static_cast<double>(input[0]) << std::endl;
	}
	else if (ScalarConverter::isInt(input))
	{
		try {
			int	tmp = std::stoi(input);
			if (std::isprint(tmp) == 0)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(tmp) << std::endl;
			std::cout << "int: " << tmp << std::endl;
			std::cout << "float: " << static_cast<float>(tmp) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(tmp) << ".0" << std::endl;
		}
		catch(std::exception &e) {
			std::cout << "Invalid input: " << e.what() << std::endl;
		}
	}
	else if (ScalarConverter::isDouble(input))
	{
		try {
			double	tmp = std::stod(input);
			int		tmpInt = static_cast<int>(tmp);
			if (std::isprint(tmpInt) == 0)
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(tmpInt) << std::endl;
			std::cout << "int: " << tmpInt << std::endl;
			std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
			std::cout << "double: " << static_cast<double>(tmp) << std::endl;
		}
		catch(std::exception &e) {
			std::cout << "Invalid input: " << e.what() << std::endl;
		}
	}
	else if (ScalarConverter::isFloat(input))
	{
		try {
		float	tmp = std::stod(input);
		int		tmpInt = static_cast<int>(tmp);
		if (std::isprint(tmpInt) == 0)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << static_cast<char>(tmpInt) << std::endl;
		std::cout << "int: " << tmpInt << std::endl;
		std::string zero;
		std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(tmp) << std::endl;
		}
		catch(std::exception &e) {
			std::cout << "Invalid input: " << e.what() << std::endl;
		}
	}
	return;
}


