#include <iostream>
#include <string>
#include <vector>

/*
The intent in employing the pattern is to insulate the creation of objects from their usage and to create families of related objects without having to depend on their concrete classes. This allows for new derived types to be introduced with no change to the code that uses the base class.

Client:
	- creates a concrete implementation of the abstract factory and then uses the generic interfaces to create the concrete objects
	- does not know (or care) which concrete objects it gets from each of these internal factories, since it uses only the generic interfaces
	- need to know how to handle only the abstract interface, not the specific version that it got from the concrete factory.

Factory:
	- is the location or a concrete class in the code at which objects are constructed.
*/

class Animal
{
public:
	virtual std::string makeSound()=0;
};

class Dog: public Animal
{
public:
	/*virtual*/ std::string makeSound()
	{
		return "woarf";
	}
};

class Cat: public Animal 
{
public:
	/*virtual*/ std::string makeSound()
	{
		return "miaow";
	}
};

class AnimalFactory
{
public:
	Animal* get(std::string name)
	{
		if(name=="dog")
			return new Dog();
		else if(name=="cat")
			return new Cat();
		else
			return NULL;
	}
};

class Zoo
{
	AnimalFactory 		m_animalFactory;
	std::vector<Animal*>	m_animal;
public:
	Zoo()
	{
		m_animal.push_back(m_animalFactory.get("dog"));
		m_animal.push_back(m_animalFactory.get("cat"));
	}

	void makeSound()
	{
		for(int i=0; i<m_animal.size(); ++i)
			std::cout<<m_animal[i]->makeSound()<<std::endl;
	}
};

int main()
{
	Zoo zoo;
	zoo.makeSound();
	
	return 0;
}
