#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constractor called!" << std::endl;
}

Brain::Brain( const Brain & obj){
    for(int i = 0; i < 100; i++){
        this->ideas[i] = obj.ideas[i];
    }
    std::cout << "Brain Copy Constractor called!" << std::endl;
}

Brain & Brain::operator = ( const Brain & obj){
    for(int i = 0; i < 100; i++){
        this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::~Brain(){
    std::cout << "Brain deconstractor called!" << std::endl;
}