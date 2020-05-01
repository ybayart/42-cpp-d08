/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 18:04:56 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 22:23:17 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Mindopen.hpp"

int
main(int argc, char** argv)
{
	if (argc != 2)
		return (1);
	Mindopen	min(argv[1]);

	try
	{
		min.parse();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
