/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:30:01 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 13:32:25 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main() {
	Data* data = new Data;
	data->data_string = "42 Heilbronn!";
	data->data_int = 42;
	uintptr_t serialized = Serialization::serialize(data);
	Data* deserialized = Serialization::deserialize(serialized);
	std::cout << "serialized: " << serialized << std::endl;
	std::cout << "Deserialized: " << std::endl;
	std::cout << "\tString: " << deserialized->data_string << std::endl;
	std::cout << "\tInt: " << deserialized->data_int << std::endl;
	delete data;
	return 0;
}
