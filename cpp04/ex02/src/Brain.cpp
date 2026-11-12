#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &a)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = a.ideas[i];
	}
    std::cout << "Brain copy constructor called." << std::endl;
}

Brain& Brain::operator=(const Brain &a)
{
    if (this != &a)
    {
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = a.ideas[i];
		}
	}
    return *this;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called." << std::endl;
}
