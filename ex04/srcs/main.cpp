/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 16:09:02 by hexa              #+#    #+#             */
/*   Updated: 2020/05/06 04:40:13 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Calculator.hpp"

void
print_list(std::list<Token*> list)
{
	std::list<Token*>::iterator	it;
	std::list<Token*>::iterator	itend;

	it = list.begin();
	itend = list.end();
	for (;it != itend;it++)
		std::cout << **it << " ";
	std::cout << std::endl;
}

int
main(int argc, char** argv)
{
	Calculator					calc;
	std::list<Token*>			list;

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
		print_list(calc.getToken());

		calc.execToken();
		std::cout << "Postfix: ";
		print_list(calc.getPostfix());

		calc.execPostfix();
		std::cout << "Result: " << calc.getResult() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
