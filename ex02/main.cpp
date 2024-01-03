/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:38:54 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 13:57:07 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Base * generate(void) {
	int class_number = rand() % 3;
	std::cout << "Class number: " << class_number << std::endl;
	switch (class_number)
	{
	case 0:
		return (new A());
	case 1:
		return (new B());
	case 2:
		return (new C());
	default:
		return (nullptr);
		break;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != nullptr) {
		std::cout << "A" << std::endl;
	} else if (dynamic_cast<B*>(p) != nullptr) {
		std::cout << "B" << std::endl;
	} else if (dynamic_cast<C*>(p) != nullptr) {
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (std::bad_cast&) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (std::bad_cast&) {
			try {
				(void)dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			} catch (std::bad_cast&) {
				// Handle error here
			}
		}
	}
}

int main(void) {
	srand(time(NULL)); // config random generator
	Base *base = generate();
	if (base == nullptr) {
		std::cout << "Something broke in the generator"	<< std::endl;
		return (1);
	}
	identify(base);
	identify(*base);
	delete base;
	return (0);
}
