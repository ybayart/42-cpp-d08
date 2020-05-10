/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculator.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:30:21 by hexa              #+#    #+#             */
/*   Updated: 2020/05/10 17:27:59 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

#include "Calculator.hpp"

#include "Token_Nb.hpp"
#include "Token_Par.hpp"
#include "Token_Op.hpp"

//===== CONSTRUCTORS

Calculator::Calculator(void) {}

Calculator::Calculator(const Calculator& src)
{
	*this = src;
}

Calculator&
Calculator::operator=	(const Calculator& rhs)
{
	if (this != &rhs)
	{
		this->m_expr = rhs.m_expr;
		this->m_token = rhs.m_token;
		this->m_postfix = rhs.m_postfix;
	}
	return (*this);
}

//===== DESTRUCTORS

Calculator::~Calculator(void)
{
	for (std::list<Token*>::iterator it = this->m_token.begin();it != this->m_token.end();it++)
		delete *it;
}

//===== SETTERLS;

void
Calculator::setExpr(std::string expr)
{
	this->m_expr = expr;
}

void
Calculator::setToken(std::list<Token*> token)
{
	this->m_token = token;
}

void
Calculator::setPostfix(std::list<Token*> postfix)
{
	this->m_postfix = postfix;
}

//===== GETTERS

std::string
Calculator::getExpr(void) const
{
	return (this->m_expr);
}

std::list<Token*>
Calculator::getToken(void) const
{
	return (this->m_token);
}

std::list<Token*>
Calculator::getPostfix(void) const
{
	return (this->m_postfix);
}

int
Calculator::getResult(void) const
{
	return (this->m_result);
}

//===== PARSERS

std::list<Token*>
Calculator::parseExpr(std::string expr)
{
	try
	{
		return (this->m_toToken(expr));
	}
	catch (std::exception& e)
	{
		throw;
	}
}

std::list<Token*>
Calculator::parseToken(std::list<Token*> token)
{
	try
	{
		return (this->m_toPostfix(token));
	}
	catch (std::exception& e)
	{
		throw;
	}
}

int
Calculator::parsePostfix(std::list<Token*> postfix)
{
	try
	{
		return (this->m_toResult(postfix));
	}
	catch (std::exception& e)
	{
		throw;
	}
}

//===== EXECUTORS

std::list<Token*>
Calculator::execExpr(void)
{
	try
	{
		this->m_token = this->m_toToken(this->m_expr);
		return (this->m_token);
	}
	catch (std::exception& e)
	{
		throw;
	}
}

std::list<Token*>
Calculator::execToken(void)
{
	try
	{
		this->m_postfix = this->m_toPostfix(this->m_token);
		return (this->m_postfix);
	}
	catch (std::exception& e)
	{
		throw;
	}
}

int
Calculator::execPostfix(void)
{
	try
	{
		this->m_result = this->m_toResult(this->m_postfix);
		return (this->m_result);
	}
	catch (std::exception& e)
	{
		throw;
	}
}

//===== CALCULATORS

std::list<Token*>
Calculator::m_toToken(std::string expr)
{
	std::list<Token*>	queue;
	Token*				token;
	int					c;

	for (int i = 0;expr[i] != '\0';i++)
	{
		c = expr[i];
		if ((c == '+' || c == '-' || c == '*' || c == '/') && ((c != '+' && c != '-') || isdigit(expr[i + 1]) == 0))
			token = new Token_Op(c);
		else if (c == '(' || c == ')')
			token = new Token_Par(c);
		else if (isdigit(c) || c == '+' || c == '-')
		{
			token = new Token_Nb(atoi(expr.c_str() + i));
			while (isdigit(expr[i + 1]))
				i++;
		}
		else if (c == ' ')
			continue;
		else
			throw std::invalid_argument("Expression contain an unrecognized symbol");
		queue.push_back(token);
	}
	return (queue);
}

std::list<Token*>
Calculator::m_toPostfix(std::list<Token*> queue)
{
	std::list<Token*>	postfix;
	std::stack<Token*>	stack;
	std::string			id;
	Token*				token;
	int					value;

	try
	{
		for (std::list<Token*>::iterator it = queue.begin();it != queue.end();it++)
		{
			id = (**it).identify();
			if (id == "Nb")
				postfix.push_back(*it);
			else if (id == "Op")
			{
				value = (**it).getValue();
				if (value == '*' || value == '/')
					while (!stack.empty() && (*stack.top()).identify() == "Op")
					{
						postfix.push_back(stack.top());
						stack.pop();
					}
				else
					while (!stack.empty() && (*(token = stack.top())).identify() == "Op" && (value = (*token).getValue() == '+' || value == '-'))
					{
						postfix.push_back(stack.top());
						stack.pop();
					}
				stack.push(*it);
			}
			else if (id == "Par")
			{
				if ((**it).getValue() == '(')
					stack.push(*it);
				else
				{
					if (!stack.empty())
					{
						while (!stack.empty() && (*stack.top()).identify() != "Par")
						{
							postfix.push_back(stack.top());
							stack.pop();
						}
						if (stack.empty())
							throw std::domain_error("Bad parenthesis");
						if (!stack.empty() && (*stack.top()).identify() == "Par")
							stack.pop();
					}
					else
						throw std::domain_error("Bad parenthesis");
				}
			}
		}
		while (!stack.empty())
		{
			token = stack.top();
			stack.pop();
			if ((*token).identify() == "Op")
				postfix.push_back(token);
			else
				throw std::domain_error("Bad parenthesis");
		}
	}
	catch (std::exception& e)
	{
		throw std::domain_error("Bad parenthesis");
	}
	return (postfix);
}

int
Calculator::m_toResult(std::list<Token*> queue)
{
	std::stack<int>	stack;
	std::string		id;
	int				value;

	value = 0;
	for (std::list<Token*>::iterator it = queue.begin();it != queue.end();it++)
	{
		id = (**it).identify();
		std::cout << "| " << (**it) << " | ";
		if (id == "Nb")
		{
			stack.push((**it).getValue());
			std::cout << "PUSH ";
		}
		else if (id == "Op")
		{
			if (stack.size() < 2)
				throw std::logic_error("Bad syntax");
			value = stack.top();
			stack.pop();
			switch ((**it).getValue())
			{
				case '*':
					value = stack.top() * value;
					std::cout << "MUL  ";
					break;
				case '/':
					if (value == 0)
						throw std::domain_error("Div by 0");
					value = stack.top() / value;
					std::cout << "DIV  ";
					break;
				case '+':
					value = stack.top() + value;
					std::cout << "ADD  ";
					break;
				case '-':
					value = stack.top() - value;
					std::cout << "SUB  ";
					break;
			}
			stack.pop();
			stack.push(value);
		}
		std::cout << " | " << stack.top() << std::endl;
	}
	if (!stack.empty())
	{
		value = stack.top();
		stack.pop();
	}
	return (value);
}
