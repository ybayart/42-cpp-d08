/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token_Par.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:01:58 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 17:36:22 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_PAR_HPP
# define TOKEN_PAR_HPP

# include "Token.hpp"

class	Token_Par : public Token
{
	public:
		Token_Par(int);

		virtual std::string		identify(void) const;
};

#endif
