#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(/* args */)
{
}

Zombie::~Zombie()
{
    std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
