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
# include <algorithm>

template <typename T>
bool
easyfind(T container, int tofind)
{
	try
	{
		if (std::binary_search(container.begin(), container.end(), tofind))
			return (true);
		else
			return (false);
	}
	catch (std::exception& e)
	{
		throw;
	}
}

#endif
