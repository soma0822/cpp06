/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:51:18 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 16:59:47 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void)
{
	for (int i = 0; i < 10; i++) {
		std::cout << "\n---------test" << i << "------------" << std::endl;
		Base *base = generate();
		identify(base);
		identify(*base);
		delete base;
	}
}