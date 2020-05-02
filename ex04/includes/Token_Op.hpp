/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token_Op.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:01:58 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 17:30:59 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_OP_HPP
# define TOKEN_OP_HPP

# include "Token.hpp"

class	Token_Op : public Token
{
	public:
		Token_Op(int);

		virtual std::string		identify(void) const;
};

#endif
