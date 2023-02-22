/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 16:49:27 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/22 17:09:03 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP

#include <iostream>
#include <stdint.h>
#include <string>

struct Data
{
	std::string str;
	std::string getStr(void) { return str ;};
};

class Serialize
{
	private:
	Serialize();
	Serialize(Serialize const &obj);
	Serialize &operator=(Serialize const &obj);
	~Serialize();
	/* data */

	public:
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

#endif