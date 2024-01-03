/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkollner <jkollner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:51:07 by jkollner          #+#    #+#             */
/*   Updated: 2024/01/03 13:32:48 by jkollner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization() {}
Serialization::Serialization(Serialization const & src) {
	*this = src;
}
Serialization & Serialization::operator=(Serialization const & rhs) {
	if (this != &rhs) {}
	return (*this);
}
Serialization::~Serialization() {}

uintptr_t Serialization::serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serialization::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}
