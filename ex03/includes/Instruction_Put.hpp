/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction_Put.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:34:53 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:02:13 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_PUT_HPP
# define INSTRUCTION_PUT_HPP

# include "Instruction.hpp"

class	Instruction_Put : public Instruction
{
	public:
		Instruction_Put(void) {};
		~Instruction_Put(void) {};
		virtual void	execute(Mindopen&);
		std::string		identify(void);
};

#endif
