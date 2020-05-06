/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mindopen.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:19:50 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:22:45 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mindopen.hpp"
#include "Instruction_IncP.hpp"
#include "Instruction_DecP.hpp"
#include "Instruction_IncV.hpp"
#include "Instruction_DecV.hpp"
#include "Instruction_Get.hpp"
#include "Instruction_Put.hpp"
#include "Instruction_Jump.hpp"
#include "Instruction_Goto.hpp"

Mindopen::Mindopen(void) {}

Mindopen::Mindopen(std::string file)
{
	this->m_file = file;
	this->m_pos = 0;
	this->m_init_ptr = new unsigned char[30000];
	bzero(this->m_init_ptr, 30000);
	this->m_ptr = this->m_init_ptr;
}

Mindopen::Mindopen(const Mindopen& src)
{
	*this = src;
}

Mindopen&
Mindopen::operator=	(const Mindopen& rhs)
{
	if (this != &rhs)
	{
		this->m_file = rhs.m_file;
		this->m_inst = rhs.m_inst;
		this->m_pos = rhs.m_pos;
		this->m_ptr = rhs.m_ptr;
		this->m_init_ptr = rhs.m_init_ptr;
	}
	return (*this);
}

Mindopen::~Mindopen(void)
{
	for (std::vector<Instruction*>::iterator it = this->m_inst.begin();it != this->m_inst.end();it++)
		delete *it;
	this->m_inst.clear();
	delete[] this->m_init_ptr;
}

std::ifstream*
Mindopen::m_open(std::string file)
{
	std::ifstream*	input = new std::ifstream;

	(*input).open(file.c_str());
	if (!(*input))
	{
		delete input;
		throw std::invalid_argument(file + ": " + strerror(errno));
	}
	return (input);
}

char*
Mindopen::m_read(std::ifstream* input)
{
	int		length;
	char*	buffer;

	(*input).seekg(0, (*input).end);
	length = (*input).tellg();
	(*input).seekg (0, (*input).beg);
	buffer = new char [length + 1];
	(*input).read (buffer,length);
	if (!(*input))
	{
		delete[] buffer;
		throw std::runtime_error("File couldn't be read entirely");
	}
	buffer[length] = '\0';
	return (buffer);
}

Instruction*
Mindopen::m_makeObj(char c)
{
	switch(c)
	{
		case '*':
			return (new Instruction_IncP);
		case '/':
			return (new Instruction_DecP);
		case '&':
			return (new Instruction_IncV);
		case '%':
			return (new Instruction_DecV);
		case '_':
			return (new Instruction_Put);
		case '=':
			return (new Instruction_Get);
		case '{':
			return (new Instruction_Jump);
		case '}':
			return (new Instruction_Goto);
		default:
			throw std::exception();
	}
}

const std::string
Mindopen::getFile(void) const
{
	return (this->m_file);
}

size_t
Mindopen::size(void) const
{
	return (this->m_inst.size());
}

const std::vector<Instruction*>
Mindopen::getList(void) const
{
	return (this->m_inst);
}

int&
Mindopen::getPos(void)
{
	return (this->m_pos);
}

unsigned char*&
Mindopen::getPtr(void)
{
	return (this->m_ptr);
}

void
Mindopen::setFile(std::string file)
{
	this->m_file = file;
}

void
Mindopen::parse(void)
{
	std::ifstream*	file;
	char*			buffer;

	try
	{
		file = this->m_open(this->m_file);
	}
	catch (std::exception& e)
	{
		throw;
	}
	try
	{
		buffer = this->m_read(file);
	}
	catch (std::exception& e)
	{
		delete file;
		throw;
	}
	this->m_inst.clear();
	(*file).close();
	delete file;

	for (int i = 0;buffer[i] != '\0';i++)
	{
		try
		{
		this->m_inst.push_back(this->m_makeObj(buffer[i]));
//		this->m_makeObj(buffer[i])->execute();
//		std::cout << "| " << (buffer[i] < 32 || buffer[i] > 126 ? ' ' : buffer[i]) << " - " << (int)buffer[i] << std::endl;
		}
		catch (std::exception& e) {}
	}

	while ((size_t)this->m_pos < this->m_inst.size())
	{
//		std::cout << "loop: " << this->m_pos << std::endl;
		this->m_inst.at(this->m_pos)->execute(*this);
		this->m_pos++;
	}

//	for (auto const &val : this->m_inst)
//		val->execute(*this);

	delete[] buffer;
}
