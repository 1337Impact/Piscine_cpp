#include "Zombie.hpp"

int main()
{
	const int N = 10;
	std::string name = "Zoro";
	Zombie *zHord = zombieHorde(N, name);
	for (int i = 0; i < N; i++){
		zHord[i].announce();
	}
	delete [] zHord;
}