#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:

    public:
        WrongCat();
        WrongCat( const WrongCat & obj);
        WrongCat & operator = ( const WrongCat & obj);
        ~WrongCat();
};
#endif