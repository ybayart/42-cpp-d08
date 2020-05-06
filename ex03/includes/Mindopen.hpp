/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mindopen.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:15:03 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:22:19 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

# include <fstream>
# include <iostream>
# include <vector>
# include <exception>
# include <string.h>
# include <cerrno>
# include <string.h>

# include "Instruction.hpp"

class	Instruction;

class	Mindopen
{
	private:
		std::string					m_file;
		std::vector<Instruction*>	m_inst;
		int							m_pos;
		unsigned char*				m_init_ptr;
		unsigned char*				m_ptr;

		std::ifstream*				m_open(std::string);
		char*						m_read(std::ifstream*);
		Instruction*				m_makeObj(char);

	public:
		Mindopen(void);
		Mindopen(std::string);
		Mindopen(const Mindopen&);
		Mindopen& operator=	(const Mindopen&);
		~Mindopen(void);

		const std::string				getFile(void) const;
		size_t							size(void) const;
		const std::vector<Instruction*>	getList(void) const;
		int&							getPos(void);
		unsigned char*&					getPtr(void);
	
		void	setFile(std::string);
		void	parse(void);
		void	execute(void);
};

#endif
