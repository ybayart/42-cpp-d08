/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 03:25:12 by hexa              #+#    #+#             */
/*   Updated: 2020/04/30 04:47:33 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>

template <typename T>
int&
easyfind(T container, int tofind)
{
	try
	{
		for (typename T::iterator it = container.begin();it != container.end(); it++)
			if (*it == tofind)
				return (*it);
	}
	catch (std::exception& e)
	{
		throw;
	}
	throw std::exception();
}

#endif
