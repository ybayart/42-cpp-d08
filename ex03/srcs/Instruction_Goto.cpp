/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Goto.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:37:32 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:16:00 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Instruction_Goto.hpp"

void
Instruction_Goto::execute(Mindopen& min)
{
	try
	{
		if (*min.getPtr() != 0)
		{
			while (min.getList().at(min.getPos())->identify() != "Jump" && (size_t)min.getPos() > 0)
				min.getPos()--;
		}
	}
	catch (std::exception& e) {}
}


std::string
Instruction_Goto::identify(void)
{
	return ("Goto");
};
