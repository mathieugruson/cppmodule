/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:46:23 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/28 14:46:25 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	std::cout << "SUBJECT TEST \n" << std::endl;

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		sp.addNumber(42);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(1);
		sp.addNumber(6);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Span sp = Span(10000);
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			sp.addNumber(rand() % INT_MAX);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "ADD RANGE TEST\n" << std::endl;

	try
	{
		std::vector<int> tmp;
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
			tmp.push_back(rand() % INT_MAX);
		Span sp = Span(20000);
		sp.addRange(tmp.begin(), tmp.end());
		std::cout << "addRange 1" << std::endl;
		sp.addRange(tmp.begin(), tmp.end());
		std::cout << "addRange 2" << std::endl;
		sp.addRange(tmp.begin(), tmp.end());
		std::cout << "addRange 3" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::vector<int> tmp;
		srand(time(NULL));
		for (int i = 0; i < 10; i++)
			tmp.push_back(i);
		Span sp = Span(30);
		sp.addRange(tmp.begin(), tmp.end());
		std::cout << "addRange 1" << std::endl;
		sp.addRange(tmp.begin(), tmp.end());
		std::cout << "addRange 2" << std::endl;
		sp.addRange(tmp.begin(), tmp.end());
		std::cout << "addRange 3" << std::endl;
		for (int i = 0; i < 30; i++)
			std::cout << sp.getVector()[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nERROR TEST\n" << std::endl;

	try
	{
		Span sp = Span(10);
		srand(time(NULL));
		for (int i = 0; i < 1; i++)
		{
			sp.addNumber(rand() % INT_MAX);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}