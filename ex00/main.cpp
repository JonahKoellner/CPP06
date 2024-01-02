/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonahkollner <jonahkollner@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 20:54:47 by jonahkollne       #+#    #+#             */
/*   Updated: 2024/01/02 20:58:46 by jonahkollne      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

int main( int argc, char **argv ) {
	if (argc != 2)
		return (1);
	ScalarConverter::convert(argv[1]);
	return (0);
};
