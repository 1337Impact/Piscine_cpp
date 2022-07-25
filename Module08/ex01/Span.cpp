#include "Span.hpp"

Span::Span()
:_capacity(0), _size(0)
{
}

Span::Span( const unsigned int N )
:_capacity(N), _size(0)
{
}

Span::Span( const Span & obj)
:_capacity(obj._capacity), _size(0)  
{
}

Span::~Span()
{
}

// overload operators

const Span & Span::operator = (const Span & obj){
    _size = obj.getSize();
    _arr = obj.getArr();
    return *this;
}

// member functions

void    Span::addNumber( int nbr){
    if (_size < _capacity)
    {
        _arr.push_back(nbr);
        _size++;
    }
    else
        throw SpanIsFullException();
}

void    Span::addNumbers( int *arr, int len){
    for (int i = 0; i < len; i++)
    {
        if (_size < _capacity)
            addNumber(arr[i]);
        else
            throw SpanIsFullException();
    }
}

int Span::shortestSpan( void )
{
    int min;
    if (_size <= 1)
        throw NoSpanFoundException();
    else{
        min = abs(_arr[0] - _arr[1]);
        for (unsigned int i = 0; i < _size - 1; i++){
            if (abs(_arr[i] - _arr[i+1]) < min)
                min = abs(_arr[i] - _arr[i+1]);
        }
    }
    return min;
}

int Span::longestSpan( void )
{
    int max;
    if (_size <= 1)
        throw NoSpanFoundException();
    else{
        max = abs(_arr[0] - _arr[1]);
        for (unsigned int i = 0; i < _size - 1; i++){
            if (abs(_arr[i] - _arr[i+1]) > max)
                max = abs(_arr[i] - _arr[i+1]);
        }
    }
    return max;
}

// getters

int Span::getSize() const
{
    return _size;
}

int Span::getCapacity() const
{
    return _capacity;
}

std::vector<int> Span::getArr() const
{
    return _arr;
}

// exceptions
const char *Span::SpanIsFullException::what() const throw()
{
	return "Exception: Span is Full!";
}

const char *Span::NoSpanFoundException::what() const throw()
{
	return "Exception: No Span Can Be Found!";
}