#pragma once

#include <iostream>
#include <string>
#include <stack>


template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
    typedef typename std::stack<T, Container>::container_type::iterator iterator;

    MutantStack() 
    : std::stack<T, Container>(){};

    MutantStack( const MutantStack & obj)
    : std::stack<T, Container>(obj){};

    MutantStack & operator = ( const MutantStack & obj)
    {
        *this = obj;
        return *this;
    }

    ~MutantStack()
    {};

    iterator begin(void){
        return this->c.begin();
    };

    iterator end() {
        return this->c.end();
    };
};