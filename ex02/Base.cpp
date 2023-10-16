/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soma <soma@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:26:09 by soma              #+#    #+#             */
/*   Updated: 2023/10/16 16:53:01 by soma             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void) {
	return;
}

Base	*generate(void) {
	int	r = std::rand();
	if (r % 3 == 0)
		return (new A);
	else if (r % 3 == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p) {
	std::string put = "";
	A *a = dynamic_cast<A*>(p);
	B *b = dynamic_cast<B*>(p);
	C *c = dynamic_cast<C*>(p);
	if (a)
		put = "A";
	else if (b)
		put = "B";
	else if (c)
		put = "C";
	std::cout << put << std::endl;
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception &e) {
		try {
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
			return;
		} catch (std::exception &e) {
			try {
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C" << std::endl;
				return;
			} catch (std::exception &e) {
				std::cout << "Error" << std::endl;
				return;
			}
		}
	}
}