/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token_Par.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:05:05 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 17:28:58 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Token_Par.hpp"

Token_Par::Token_Par(int c) : Token(c) {}

std::string
Token_Par::identify(void) const
{
	return ("Par");
}