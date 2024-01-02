/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:28:10 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/01/02 20:36:57 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ScalarConverter {
	private:
		ScalarConverter(); // default constructor
		ScalarConverter(ScalarConverter const & src); // copy constructor
		ScalarConverter & operator=(ScalarConverter const & rhs); // assignment operator
		~ScalarConverter(); // destructor

	public:

		static void convert(std::string input);
};

