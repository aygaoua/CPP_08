#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <string>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack										(): std::stack<T>() {}
		MutantStack										(MutantStack const & src): std::stack<T>(src) {}
		MutantStack&									operator =(const MutantStack& b) {
			if (this != &b)
				std::stack<T>::operator=(b);
			return *this;
		}
		~MutantStack									() {}

		typedef typename std::stack<T>::container_type::iterator		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

		iterator										begin() {
			return this->c.begin();
		}

		iterator										end() {
			return this->c.end();
		}

		const_iterator									begin() const {
			return this->c.begin();
		}

		const_iterator									end() const {
			return this->c.end();
		}
};

#endif