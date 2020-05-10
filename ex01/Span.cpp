/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 04:57:50 by hexa              #+#    #+#             */
/*   Updated: 2020/05/10 16:30:33 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	this->m_size = 0;
}

Span::Span(const unsigned int n)
{
	this->m_size = n;
}

Span::Span(const Span& src)
{
	*this = src;
}

Span&
Span::operator=	(const Span& rhs)
{
	if (this != &rhs)
	{
		this->m_size = rhs.m_size;
		this->m_index = rhs.m_index;
		this->m_list = rhs.m_list;
	}
	return (*this);
}

Span::~Span(void) {}

void
Span::addNumber(int nb)
{
	if (this->m_size > this->m_list.size())
		this->m_list.insert(nb);
	else
		throw std::overflow_error("Reach the maximum");
}

void
Span::fillNumber(int func(int))
{
	this->m_list.clear();
	for (unsigned int i = 0;i < this->m_size;i++)
		this->m_list.insert(func(i));
}

int
Span::shortestSpan(void)
{
	int		min = 2147483647;
	int		diff;

	if (this->m_list.size() < 2)
		throw std::runtime_error("Not enough values");
	std::set<int> list = this->m_list;
	std::set<int>::iterator it1 = list.begin();
	std::set<int>::iterator it2 = list.begin();
	it2++;
	while (it2 != list.end())
		if ((diff = *(it2++) - *(it1++)) < min)
			min = diff;
	return (min);
}

int
Span::longestSpan(void)
{
	if (this->m_list.size() < 2)
		throw std::runtime_error("Not enough values");
	return (*(std::max_element(this->m_list.begin(), this->m_list.end())) -
			*(std::min_element(this->m_list.begin(), this->m_list.end())));
}
