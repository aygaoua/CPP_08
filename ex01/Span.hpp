#pragma once 

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class Span {
	private:
		unsigned int N;
		std::vector<int> elmnts;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Span		();
		Span		(unsigned int N);
		Span		(Span const & src);
		Span&		operator =(const Span& b);
		~Span       ();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public member functions -----------------------*/
		void addNumber(int elmnt);
		int shortestSpan();
		int longestSpan();
		template <typename InputIterator> void addNumbers(InputIterator begin, InputIterator end);
	/*-----------------------------------------------------------------------*/
};