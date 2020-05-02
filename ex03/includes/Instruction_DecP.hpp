/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_DecP.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:31:08 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_DECP_HPP
# define INSTRUCTION_DECP_HPP

# include "Instruction.hpp"

class	Instruction_DecP : public Instruction
{
	public:
		Instruction_DecP(void) {};
		~Instruction_DecP(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
