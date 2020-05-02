/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_IncV.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:01:42 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_INCV_HPP
# define INSTRUCTION_INCV_HPP

# include "Instruction.hpp"

class	Instruction_IncV : public Instruction
{
	public:
		Instruction_IncV(void) {};
		~Instruction_IncV(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
