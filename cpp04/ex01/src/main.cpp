#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "--- Dog: constructor de copia ---" << std::endl;
    {
        Dog original;
        original.setIdea(0, "hueso");
        Dog copy(original);
        original.setIdea(0, "pelota");
        std::cout << original.getIdea(0) << " / " << copy.getIdea(0) << std::endl;
    }

    std::cout << "--- Dog: operator= ---" << std::endl;
    {
        Dog a;
        Dog b;
        a.setIdea(0, "hueso");
        b = a;
        a.setIdea(0, "pelota");
        std::cout << a.getIdea(0) << " / " << b.getIdea(0) << std::endl;
    }

    std::cout << "--- Dog: independencia al destruir ---" << std::endl;
    {
        Dog* d1 = new Dog();
        d1->setIdea(0, "hueso");
        Dog* d2 = new Dog(*d1);
        delete d1;
        std::cout << d2->getIdea(0) << std::endl;
        delete d2;
    }

    std::cout << "--- Cat: constructor de copia ---" << std::endl;
    {
        Cat original;
        original.setIdea(0, "ratón");
        Cat copy(original);
        original.setIdea(0, "lana");
        std::cout << original.getIdea(0) << " / " << copy.getIdea(0) << std::endl;
    }

    std::cout << "--- Cat: operator= ---" << std::endl;
    {
        Cat a;
        Cat b;
        a.setIdea(0, "ratón");
        b = a;
        a.setIdea(0, "lana");
        std::cout << a.getIdea(0) << " / " << b.getIdea(0) << std::endl;
    }

    std::cout << "--- Cat: independencia al destruir ---" << std::endl;
    {
        Cat* c1 = new Cat();
        c1->setIdea(0, "ratón");
        Cat* c2 = new Cat(*c1);
        delete c1;
        std::cout << c2->getIdea(0) << std::endl;
        delete c2;
    }

    return 0;
}
