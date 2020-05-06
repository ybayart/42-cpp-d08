/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Get.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:37:32 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:13:55 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Instruction_Get.hpp"

void
Instruction_Get::execute(Mindopen& min)
{
	*(min.getPtr()) = std::cin.get();
}


std::string
Instruction_Get::identify(void)
{
	return ("Get");
};
