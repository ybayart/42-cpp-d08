/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 15:29:26 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 18:28:29 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_HPP
# define TOKEN_HPP

# include <iostream>

class	Token
{
	private:
		int		m_value;

	public:
		Token(int);
		virtual ~Token(void) {};

		int		getValue(void) const;

		void 	setValue(int);

		virtual std::string		identify(void) const = 0;

		std::string		details(void);
};

std::ostream& operator<<	(std::ostream&, const Token&);

#endif
