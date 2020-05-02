/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instruction.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:21:41 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 05:41:35 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_HPP
# define INSTRUCTION_HPP

# include <iostream>
# include <vector>

# include "Mindopen.hpp"

class	Mindopen;

class	Instruction
{
	public:
		Instruction(void) {};
		Instruction(const Instruction&);
		Instruction& operator=	(const Instruction&);
		virtual ~Instruction(void) {};

		virtual void		execute(Mindopen&) = 0;
		virtual std::string	identify(void) = 0;
};

#endif
