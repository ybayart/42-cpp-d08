/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Goto.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:01:09 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_GOTO_HPP
# define INSTRUCTION_GOTO_HPP

# include "Instruction.hpp"

class	Instruction_Goto : public Instruction
{
	public:
		Instruction_Goto(void) {};
		~Instruction_Goto(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
