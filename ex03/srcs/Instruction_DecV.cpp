/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_DecV.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:37:32 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:13:18 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Instruction_DecV.hpp"

void
Instruction_DecV::execute(Mindopen& min)
{
	--(*min.getPtr());
}


std::string
Instruction_DecV::identify(void)
{
	return ("DecV");
};
