#include "Span.hpp"

int main()
{
	try {
		std::cout << "_____________test1_____________\n";
		std::vector<int> k;
		k.push_back(6);
		k.push_back(3);
		k.push_back(17);
		k.push_back(9);
		k.push_back(11);
		Span sp1(5);
		sp1.addNumbers(k.begin(), k.end());

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;

		std::cout << "_____________test2_____________\n";
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::cout << "_____________test3_____________\n";
		sp.addNumber(8);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}
