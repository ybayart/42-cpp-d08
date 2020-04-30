/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 03:35:30 by hexa              #+#    #+#             */
/*   Updated: 2020/04/30 04:47:27 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int
main(void)
{
	std::vector<int>			list1(10);

	for (int i = 0;i < 10;i++)
		list1[i] = rand() % 10 + 1;
	try
	{
		std::cout << "find: " << ::easyfind(list1, 4) << std::endl;
		std::cout << "find: " << ::easyfind(list1, 5) << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
