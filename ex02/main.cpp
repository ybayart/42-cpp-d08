/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:52:23 by hexa              #+#    #+#             */
/*   Updated: 2020/05/10 17:11:13 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int
main(void)
{
	MutantStack<int>	mstack;

	std::cout << "size: " << mstack.size() << " empty? " << mstack.empty() << std::endl;
	mstack.pop();
	
	mstack.push(5);
	std::cout << "size: " << mstack.size() << " empty? " << mstack.empty() << std::endl;
	mstack.push(17);
	std::cout << "size: " << mstack.size() << " empty? " << mstack.empty() << std::endl;

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

	std::cout << "size: " << mstack.size() <<
				" empty? " << mstack.empty()  <<
				" top " << mstack.top()<< std::endl;
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	mstack.pop();
	std::cout << "size: " << mstack.size() <<
				" empty? " << mstack.empty()  <<
				" top " << mstack.top()<< std::endl;

	return (0);
}
