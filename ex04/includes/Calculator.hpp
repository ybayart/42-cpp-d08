/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Calculator.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:16:25 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:45:47 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALCULATOR_HPP
# define CALCULATOR_HPP

# include <queue>
# include <list>
# include <exception>
# include <cstdlib>

# include "Token.hpp"

class	Calculator
{
	private:
		std::string			m_expr;
		std::list<Token*>	m_token;
		std::list<Token*>	m_postfix;
		int					m_result;

		std::list<Token*>	m_toToken(std::string);
		std::list<Token*>	m_toPostfix(std::list<Token*>);
		int					m_toResult(std::list<Token*>);

	public:
		Calculator(void);
		Calculator(const Calculator&);
		Calculator& operator=	(const Calculator&);
		~Calculator(void);

		void	setExpr(std::string);
		void	setToken(std::list<Token*>);
		void	setPostfix(std::list<Token*>);

		std::string			getExpr(void) const;
		std::list<Token*>	getToken(void) const;
		std::list<Token*>	getPostfix(void) const;
		int					getResult(void) const;

		std::list<Token*>	parseExpr(std::string);
		std::list<Token*>	parseToken(std::list<Token*>);
		int					parsePostfix(std::list<Token*>);

		std::list<Token*>	execExpr(void);
		std::list<Token*>	execToken(void);
		int					execPostfix(void);
};

#endif
