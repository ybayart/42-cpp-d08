/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Get.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:00:53 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_GET_HPP
# define INSTRUCTION_GET_HPP

# include "Instruction.hpp"

class	Instruction_Get : public Instruction
{
	public:
		Instruction_Get(void) {};
		~Instruction_Get(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
