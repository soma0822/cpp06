/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:51:01 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 15:21:24 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

int	main(void) {
	{
		std::cout << GREEN << "----------char----------" << RESET << std::endl;
		std::cout << "test1 : a" << std::endl;
		ScalarConverter::convert("a");
		std::cout << "test2 : aa" << std::endl;
		ScalarConverter::convert("aa");
		std::cout << "test3 : \"" << std::endl;
		ScalarConverter::convert("\"");
		std::cout << std::endl;
	}

	{
		std::cout << GREEN << "-----------int----------" << RESET << std::endl;
		std::cout << "\ntest1 : 42" << std::endl;
		ScalarConverter::convert("42");
		std::cout << "\ntest2 : 2147483647" << std::endl;
		ScalarConverter::convert("2147483647");
		std::cout << "\ntest3 : -2147483648" << std::endl;
		ScalarConverter::convert("-2147483648");
		std::cout << std::endl;
	}

	{
		std::cout << GREEN << "-----------float----------" << RESET << std::endl;
		std::cout << "\ntest1 : 42.0f" << std::endl;
		ScalarConverter::convert("42.0f");
		std::cout << "\ntest2 : inff" << std::endl;
		ScalarConverter::convert("inff");
		std::cout << "\ntest3 : -inff" << std::endl;
		ScalarConverter::convert("-inff");
		std::cout << "\ntest4 : nanf" << std::endl;
		ScalarConverter::convert("nanf");
		std::cout << std::endl;
	}

	{
		std::cout << GREEN << "-----------double----------" << RESET << std::endl;
		std::cout << "\ntest1 : 42.0" << std::endl;
		ScalarConverter::convert("42.0");
		std::cout << "\ntest2 : inf" << std::endl;
		ScalarConverter::convert("inf");
		std::cout << "\ntest3 : -inf" << std::endl;
		ScalarConverter::convert("-inf");
		std::cout << "\ntest4 : nan" << std::endl;
		ScalarConverter::convert("nan");
		std::cout << std::endl;
	}

}

// int main(void)
// {
// 	std::string input;
// 	while (1) {
// 		std::cout << "Enter a value: ";
// 		std::getline(std::cin, input);
// 		if (std::cin.eof())
// 		{
// 			std::exit(0);
// 		}
// 		ScalarConverter::convert(input);
// 	}
// 	return (0);
// }