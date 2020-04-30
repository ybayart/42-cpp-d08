/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:52:23 by hexa              #+#    #+#             */
/*   Updated: 2020/05/01 00:30:13 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int
main(void)
{
	MutantStack<int>	mstack;

	mstack.pop();
	
	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << " | size: " << mstack.size() << std::endl;

	mstack.pop();

	std::cout << "top: " << mstack.top() << " | size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	--it;
	++it;

	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return (0);
}
