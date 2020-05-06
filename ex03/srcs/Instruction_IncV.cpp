/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_IncV.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:37:32 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:13:09 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Instruction_IncV.hpp"

void
Instruction_IncV::execute(Mindopen& min)
{
	++(*min.getPtr());
}


std::string
Instruction_IncV::identify(void)
{
	return ("IncV");
};
