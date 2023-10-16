/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:39:22 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 16:05:29 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"

class Serializer {
	public:
		static Data* deserialize(uintptr_t raw);
		static uintptr_t serialize(Data* ptr);

	private:
		Serializer(void);
		~Serializer(void);
};

#endif