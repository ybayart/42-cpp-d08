/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:09:02 by hexa              #+#    #+#             */
/*   Updated: 2020/05/02 20:58:00 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Calculator.hpp"

int
main(int argc, char** argv)
{
	Calculator	calc;

	if (argc != 2)
	{
		std::cout << "You lose!" << std::endl;
		return (1);
	}
	calc.setExpr(argv[1]);
	try
	{
		calc.execExpr();
		std::cout << "Tokens: ";
		for (auto const &val : calc.getToken())
			std::cout << *val << " ";
		std::cout << std::endl;

		calc.execToken();
		std::cout << "Postfix: ";
		for (auto const &val : calc.getPostfix())
			std::cout << *val << " ";
		std::cout << std::endl;

		calc.execPostfix();
		std::cout << "Result: " << calc.getResult() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
