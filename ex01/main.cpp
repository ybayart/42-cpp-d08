/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 05:06:38 by hexa              #+#    #+#             */
/*   Updated: 2020/05/10 17:32:00 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int
make_rand(int val)
{
	(void)val;
	return (rand() % 4294967296 - 2147483647);
}

void
check1(Span& sp)
{
	try
	{
		sp.addNumber(-5);
		sp.addNumber(42);

		std::cout << sp.shortestSpan() << " | " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void
check2(Span& sp)
{
	try
	{
		sp.addNumber(2147483647);
		sp.addNumber(5);
		sp.addNumber(0);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(2147483646);

		std::cout << sp.shortestSpan() << " | " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void
check3(Span& sp)
{
	try
	{
		sp.addNumber(5);

		std::cout << sp.shortestSpan() << " | " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void
check4(Span& sp)
{
	try
	{
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);
		sp.addNumber(42);

		std::cout << sp.shortestSpan() << " | " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void
check5(Span& sp)
{
	try
	{
		sp.fillNumber(make_rand);

		std::cout << sp.shortestSpan() << " | " << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int
main(void)
{
	std::cout << "1: ";
	Span	sp1;
	check1(sp1);

	std::cout << "2: ";
	Span	sp2(1);
	check1(sp2);

	std::cout << "3: ";
	Span sp3(2);
	check1(sp3);

	std::cout << "4: ";
	Span sp4(7);
	check2(sp4);

	std::cout << "5: ";
	Span sp5(1);
	check3(sp5);

	std::cout << "6: ";
	Span sp6(5);
	check4(sp6);

	std::cout << "7: ";
	Span sp7(42);
	check5(sp7);
}
