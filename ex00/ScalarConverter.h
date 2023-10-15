/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 22:51:05 by soma              #+#    #+#             */
/*   Updated: 2023/10/15 22:48:51 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_H
# define SCALARCONVERTER_H

# include <iostream>
# include <iomanip>

class ScalarConverter {
	public:
		static void	convert(std::string const &input);
		
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		static bool isInt(std::string const &input);
		static bool isDouble(std::string const &input);
		static bool isFloat(std::string const &input);
		
};

#endif