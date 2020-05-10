/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 04:50:35 by hexa              #+#    #+#             */
/*   Updated: 2020/05/10 17:31:51 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <set>
# include <algorithm>

class	Span
{
	private:
		std::set<int>	m_list;
		unsigned int	m_size;
		unsigned int	m_index;

	public:
		Span(void);
		Span(const unsigned int);
		Span(const Span&);
		Span& operator=	(const Span&);
		~Span(void);

		void	addNumber(const int);
		void	fillNumber(int(int));

		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif
