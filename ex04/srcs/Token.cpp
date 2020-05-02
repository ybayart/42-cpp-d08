/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:58:20 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 18:29:52 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Token.hpp"

Token::Token(int c)
{
	this->m_value = c;
}

int
Token::getValue(void) const
{
	return (this->m_value);
}

void
Token::setValue(int c)
{
	this->m_value = c;
}

std::ostream&
operator<<	(std::ostream& o, const Token& rhs)
{
	std::string		id;

	id = rhs.identify();
	o << id << "(";
	if (id == "Nb")
		o << rhs.getValue();
	else
		o << (char)rhs.getValue();
	o << ")";
	return (o);
}
