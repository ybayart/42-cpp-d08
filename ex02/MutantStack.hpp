/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hexa <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/30 23:35:55 by hexa              #+#    #+#             */
/*   Updated: 2020/05/10 17:06:57 by hexa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <list>
# include <cstdlib>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
		std::list<T>		m_stack;

	public:
		MutantStack(void);
		MutantStack(MutantStack const&);
		MutantStack<T>& operator=	(MutantStack const&);
		~MutantStack(void);

		bool empty(void) const;
		T top(void);
		size_t size(void) const;

		typedef std::list<int>::iterator iterator;

		iterator begin()
		{
			return (this->m_stack.begin());
		}

		iterator end() {
			return (this->m_stack.end());
		}

		void push(T value);
		void pop(void);


};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const& src)
{
	(void)src;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T>&
MutantStack<T>::operator=	(MutantStack const& rhs)
{
	(void)rhs;
}

template <typename T>
bool
MutantStack<T>::empty(void) const
{
	return (this->m_stack.empty());
}

template <typename T>
T
MutantStack<T>::top(void)
{
	return (this->m_stack.front());
}

template <typename T>
size_t
MutantStack<T>::size(void) const
{
	return (m_stack.size());
}

template <typename T>
void
MutantStack<T>::push (T value)
{
	this->m_stack.push_front(value);
}

template <typename T>
void
MutantStack<T>::pop (void)
{
	if (this->m_stack.size() > 0)
		this->m_stack.pop_front();
}

#endif
