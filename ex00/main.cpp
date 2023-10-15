/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:51:01 by soma              #+#    #+#             */
/*   Updated: 2023/10/15 15:20:35 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.h"

int main(void)
{
	std::string input;
	std::cout << "Enter a value: ";
	std::cin >> input;
	ScalarConverter::convert(input);
	return (0);
}