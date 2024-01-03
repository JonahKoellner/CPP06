/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:51:16 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 13:26:05 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

struct Data {
	std::string data_string;
	int data_int;
};

class Serialization {
	private:
		Serialization();
		Serialization(Serialization const & src);
		Serialization & operator=(Serialization const & rhs);
		~Serialization();
	public:
		static uintptr_t serialize(Data* ptr); // takes a pointer andd converts it to the unsgined integer imteger type uintptr_t
		static Data* deserialize(uintptr_t raw); // unsigned integer parameter and converts it to a pointer of type Data

};
