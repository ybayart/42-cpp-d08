/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_DecV.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:00:32 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_DECV_HPP
# define INSTRUCTION_DECV_HPP

# include "Instruction.hpp"

class	Instruction_DecV : public Instruction
{
	public:
		Instruction_DecV(void) {};
		~Instruction_DecV(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
