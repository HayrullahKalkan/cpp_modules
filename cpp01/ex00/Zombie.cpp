#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie \"" << _name << "\" created" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _name << ": destroyed" << std::endl;
}

void Zombie::setName(std::string  &name)
{
    _name = name;
}

std::string Zombie:: getName() const
{
    return _name;
}

void Zombie::announce( void )
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
