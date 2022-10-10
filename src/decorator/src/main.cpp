#include <iostream>
#include <string>

//The Decorator attaches additional responsibilities to an object dynamically.
//The ornaments that are added to pine or fir trees are examples of Decorators.
//Lights, garland, candy canes, glass ornaments, etc.,
//can be added to a tree to give it a festive look.
//The ornaments do not change the tree itself which is recognizable as a Christmas tree
//regardless of particular ornaments used.

//Note that this pattern allows responsibilities to be added to an object, not methods to an object’s interface.
//The interface presented to the client must remain constant as successive layers are specified.

class Message
{
public:
	virtual std::string get() const=0;
};

class ConcreteMessage: public Message 
{
	std::string m_msg;

public:
	ConcreteMessage(std::string msg): m_msg(msg) {}

	std::string get() const 
	{
		return m_msg; 
	}
};

class Exclamation: public Message 
{
	Message* m_msg;

public:
	Exclamation(Message* msg): m_msg(msg) { }

	std::string get() const 
	{
    		return m_msg->get()+"!";
	}
};

/*class Interrogation: public Message 
{
public:
	Interrogation(Message* msg): m_msg(msg) { }

	std::string get() const 
	{
		std::string str(Message::get());
    		return m_msg->get()+"!";
	}
};*/

int main() 
{
	Message* msg=new Exclamation(new ConcreteMessage("Hello World"));
	std::cout<<msg->get()<<std::endl;

	return 0;
}

