#pragma once

#include <iostream>
#include <string>
#include <exception>

template <class T>
class Array
{
private:
    T   *a;
    int _size;
public:
    Array():a(new T[0]), _size(0){}
    Array( unsigned int n):a(new T[n]), _size(n){}
    Array (const Array & obj):_size(obj._size)
    {
        this->a = new T[obj._size];
        for(int i = 0; i < _size; i++)
           this->a[i] = obj.a[i]; 
    }
    ~Array(){
        if (_size)
            delete [] a;
    }

    // overload operators
    Array & operator = (const Array & obj)
    {
        this->_size = obj._size;
        this->a = new T[_size];
        for(int i = 0; i < _size; i++)
           this->a[i] = obj.a[i];
        return *this;
    }
    T & operator [] (int index){
        if (index >= _size)
            throw OutOfRange();
        return a[index];
    }

    // mumber functions
    int size( void )
    {
        return _size;
    }

    // Exception handling
    class OutOfRange : std::exception
    {
    public:
        virtual const char * what() const throw()
        {
            return "Exception: Index out or Range";
        }
    };

};