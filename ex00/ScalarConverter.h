/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:51:05 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 14:59:34 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <iostream>
# include <iomanip>

# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define RESET "\033[0m"

class ScalarConverter {
	public:
		static void	convert(std::string const &input);
		
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		static bool isChar(std::string const &input);
		static bool isInt(std::string const &input);
		static bool isDouble(std::string const &input);
		static bool isFloat(std::string const &input);
		static void	convertFromChar(std::string const &input);
		static void	convertFromInt(std::string const &input);
		static void	convertFromDouble(std::string const &input);
		static void	convertFromFloat(std::string const &input);
		
};

#endif