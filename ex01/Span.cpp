#include "Span.hpp"

Span::Span(): N(0){

}

Span::Span(unsigned int N_p): N(N_p) {

}

Span::Span		(Span const & src): N(src.N), elmnts(src.elmnts) {

}

Span&		Span::operator =(const Span& b) {

    if (this == &b)
        return (*this);
    this->N = b.N;
    this->elmnts = b.elmnts;
    return (*this);
}

Span::~Span(){

}

void Span::addNumber(int elmnt) {

    if (elmnts.size() == N)
    {
        throw std::runtime_error("rech the max number of numbers you can hold !!");
    }
    elmnts.push_back(elmnt);
}

int Span::shortestSpan() {
    int dis = INT_MAX;
    std::vector<int> tmp(elmnts);

    if (tmp.size() <= 1)
        throw std::runtime_error("No Span to calulate !!");
    std::sort(tmp.begin(),tmp.end());
    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); ++it)
    {
        if (it != tmp.begin())
        {
            std::vector<int>::iterator it__ = it - 1;
            if (abs(*it - *it__) <= dis)
            {
                dis = abs(*it - *it__);
            }
        }
    }
    return (dis);
}

int Span::longestSpan() {

    if (elmnts.size() <= 1)
        throw std::runtime_error("No Span to calulate !!");
    int max_nb = INT_MIN;
    int min_nb = INT_MAX;
    std::vector<int>::iterator max_it = std::max_element(elmnts.begin(), elmnts.end());
    std::vector<int>::iterator min_it = std::min_element(elmnts.begin(), elmnts.end());
    max_nb = *max_it;
    min_nb = *min_it;

    return (abs(max_nb - min_nb));
}


template <typename InputIterator>
void Span::addNumbers(InputIterator begin, InputIterator end) {
    if (std::distance(begin, end) + elmnts.size() > N) {
        throw std::runtime_error("maximum capacity reach when this operation is done!");
    }
    elmnts.insert(elmnts.end(), begin, end);
}