/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:19:59 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/28 14:53:54 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	std::cout << "MutantStack test : iterator\n" << std::endl;
	try
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::stack<int> s(mstack);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\nList test : iterator\n" << std::endl;
	
	try
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
		std::list<int> s(mstack);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nMutantStack test : reverse_iterator\n" << std::endl;

	try
	{
		MutantStack<int> mystack;
		for (int i=0; i<10; i++) mystack.push(i);
		
		MutantStack<int>::reverse_iterator it = mystack.rbegin();
		MutantStack<int>::reverse_iterator ite = mystack.rend();
	
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nList test : reverse_iterator\n" << std::endl;
	
	try
	{
		std::list<int> mystack;
		for (int i=0; i<10; i++) mystack.push_back(i);
		
		std::list<int>::reverse_iterator it = mystack.rbegin();
		std::list<int>::reverse_iterator ite = mystack.rend();
	
		while (it != ite)
		{
			std::cout << *it << " ";
			++it;
		}
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

std::cout << "\n Copy / = test\n" << std::endl;

	try
	{
		MutantStack<int> mystack;
		mystack.push(5);
		mystack.push(17);
		MutantStack<int> yourstac(mystack);
		MutantStack<int> stack3 = mystack;
		std::cout << mystack.size() << std::endl;
		std::cout << stack3.size() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}



return 0;

}
