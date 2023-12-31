/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:36:56 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 15:38:18 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <iomanip>

# define RED "\033[0;31m"
# define RESET "\033[0m"

typedef struct s_data {
	std::string s1;
	int n;
	std::string s2;
} Data;

#endif