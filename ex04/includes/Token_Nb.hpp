/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Token_Nb.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:01:58 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 17:30:33 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKEN_NB_HPP
# define TOKEN_NB_HPP

# include "Token.hpp"

class	Token_Nb : public Token
{
	public:
		Token_Nb(int);

		virtual std::string		identify(void) const;
};

#endif
