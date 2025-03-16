#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class Span {
	private:
		unsigned int		N;
		std::vector<int>	elmnts;
	public:
	/*----------------------- Orthodox Canonical Form -----------------------*/
		Span		();
		Span		(unsigned int N);
		Span		(Span const & src);
		Span&		operator =(const Span& b);
		~Span		();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public member functions -----------------------*/
		void		addNumber(int elmnt);
		int			shortestSpan();
		int			longestSpan();
	/*-----------------------------------------------------------------------*/

	/*----------------------- public template functions -----------------------*/
		template <typename It>
		void 		addNumbers(It begin, It end) {
			if (std::distance(begin, end) + elmnts.size() > N) {
				throw std::runtime_error("Maximum capacity reach when this operation is done!");
			}
			elmnts.insert(elmnts.end(), begin, end);
		}
	/*-----------------------------------------------------------------------*/
};

#endif