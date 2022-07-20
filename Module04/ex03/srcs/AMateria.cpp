#include "../headers/AMateria.hpp"

AMateria::AMateria( std::string const & type)
: _type(type)
{
}

~AMateria()
{
}

std::string const & getType() const{
	return _type;
}

void use( ICharacter & target){
	(void)target;
}