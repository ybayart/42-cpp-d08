/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Put.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:37:32 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:15:26 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Instruction_Put.hpp"

void
Instruction_Put::execute(Mindopen& min)
{
	std::cout.put(*min.getPtr());
}


std::string
Instruction_Put::identify(void)
{
	return ("Put");
};
