/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgruson <mgruson@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 14:47:20 by mgruson           #+#    #+#             */
/*   Updated: 2023/02/28 14:47:22 by mgruson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <stdexcept>
# include <iterator>
# include <climits>

# define DEBUG 0

class Span {
 private:
	std::size_t _size;
	std::vector<int> _v;
	Span(void);
 public:
	Span(const Span& obj);
	Span& operator=(const Span& obj);
	~Span(void);
	Span(std::size_t i);
	void addNumber(int value);
	void addRange(std::vector<int>::iterator const &begin, std::vector<int>::iterator const &end);
	int shortestSpan() const;
	int longestSpan() const;
	std::size_t getSize() const;
	std::vector<int> getVector() const;
	std::vector<int>* getVectorPointer() const;
};

#endif
