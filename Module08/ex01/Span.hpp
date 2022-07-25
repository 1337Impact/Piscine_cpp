#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <exception>

class Span
{
private:
	const unsigned int _capacity;
	unsigned int _size;
	std::vector<int> _arr;

public:
	Span();
	Span( const unsigned int N );
	Span( const Span & obj);
	~Span();

	// Overload operators
	const Span & operator = (const Span & obj); 

	// member functions
	void addNumber(int nbr);
	void addNumbers( int *arr, int len );
	int shortestSpan( void );
	int longestSpan( void );

	// getter
	int getSize() const;
	int getCapacity() const;
	std::vector<int> getArr() const;

	// exception
	class SpanIsFullException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};
	class NoSpanFoundException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};
};