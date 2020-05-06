/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Jump.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:37:32 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:16:09 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Instruction_Jump.hpp"

void
Instruction_Jump::execute(Mindopen& min)
{
	try
	{
		if (*min.getPtr() == 0)
		{
			while (min.getList().at(min.getPos())->identify() != "Goto" && (size_t)min.getPos() < min.getList().size())
				min.getPos()++;
		}
	}
	catch (std::exception& e) {}
}


std::string
Instruction_Jump::identify(void)
{
	return ("Jump");
};
