/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:44:59 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 16:09:31 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data* data = new Data;

	data->s1 = "Hello";
	data->n = 42;
	data->s2 = "World";

	uintptr_t raw = Serializer::serialize(data);
	Data	*tmp = Serializer::deserialize(raw);
	std::cout << "data: "<< data << std::endl;
	std::cout << "serialize: "<< raw << std::endl;
	std::cout << "deserialize: " << tmp << std::endl;
	std::cout << tmp->s1 << std::endl;
	std::cout << tmp->n << std::endl;
	std::cout << tmp->s2 << std::endl;
	
	delete data;
	// std::cout << tmp->s1 << std::endl;
	// std::cout << tmp->n << std::endl;
	// std::cout << tmp->s2 << std::endl;
}