/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Jump.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:01:58 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_JUMP_HPP
# define INSTRUCTION_JUMP_HPP

# include "Instruction.hpp"

class	Instruction_Jump : public Instruction
{
	public:
		Instruction_Jump(void) {};
		~Instruction_Jump(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
