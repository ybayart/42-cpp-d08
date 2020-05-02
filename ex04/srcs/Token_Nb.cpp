/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token_Nb.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:05:05 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 17:29:12 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Token_Nb.hpp"

Token_Nb::Token_Nb(int c) : Token(c) {}

std::string
Token_Nb::identify(void) const
{
	return ("Nb");
}