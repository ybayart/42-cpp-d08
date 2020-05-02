/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_IncP.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:01:25 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_INCP_HPP
# define INSTRUCTION_INCP_HPP

# include "Instruction.hpp"

class	Instruction_IncP : public Instruction
{
	public:
		Instruction_IncP(void) {};
		~Instruction_IncP(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
