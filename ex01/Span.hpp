/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 04:50:35 by hexa              #+#    #+#             */
/*   Updated: 2020/04/30 05:12:45 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <set>

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

		int		shortestSpan(void);
		int		longestSpan(void);
};

#endif
