#include <iostream>
#include <string>

//http://www.oodesign.com/chain-of-responsibility-pattern.html

class Request 
{
	int		m_value;
	std::string	m_description;

public:
	Request(std::string description, int value)
	:	m_description(description),
		m_value(value)
	{
	}

	int getValue()
	{
		return m_value;
	}

	std::string getDescription()
	{
		return m_description;
	}          
};

class Handler
{
protected:
	Handler* m_successor;

public:
	void setSuccessor(Handler* successor)
	{
		m_successor=successor;
	}

	virtual void handleRequest(Request* request)=0;
};

class ConcreteHandlerOne: public Handler
{
public:
	void handleRequest(Request* request)
	{
		//if request is eligible handle it	
		if(request->getValue()<0)
		{
			std::cout<<"Negative values are handled by ConcreteHandlerOne:"<<std::endl;
			std::cout<<"\tConcreteHandlerOne->HandleRequest : "<<request->getDescription()<<request->getValue()<<std::endl;
		}
		else
			m_successor->handleRequest(request);
	}
 };

class ConcreteHandlerThree: public Handler
{
public:
	void handleRequest(Request* request)
	{
		//if request is eligible handle it
		if(request->getValue()>=0)
		{
			std::cout<<"Zero values are handled by ConcreteHandlerThree:"<<std::endl;
			std::cout<<"\tConcreteHandlerThree->HandleRequest : "<<request->getDescription() << request->getValue()<<std::endl;
		}
		else
			m_successor->handleRequest(request);
	}
};

class ConcreteHandlerTwo: public Handler
{
public:
	void handleRequest(Request* request)
	{
		//if request is eligible handle it
		if(request->getValue()>0)
		{
			std::cout<<"Positive values are handled by ConcreteHandlerTwo:"<<std::endl;
			std::cout<<"\tConcreteHandlerTwo->HandleRequest : "<<request->getDescription()<<request->getValue()<<std::endl;
		}
		else
			m_successor->handleRequest(request);
	}
};

int main() 
{
	//setup Chain of Responsibility
	Handler* h1=new ConcreteHandlerOne();
	Handler* h2=new ConcreteHandlerTwo();
	Handler* h3=new ConcreteHandlerThree();
	h1->setSuccessor(h2);
	h2->setSuccessor(h3);

	//define requests
	Request* r1=new Request("Negative Value ", -1);
	Request* r2=new Request("Negative Value ",  0);
	Request* r3=new Request("Negative Value ",  1);
	Request* r4=new Request("Negative Value ",  2);
	Request* r5=new Request("Negative Value ", -5);

	//send requests to the chain
	h1->handleRequest(r1);
	h1->handleRequest(r2);
	h1->handleRequest(r3);
	h1->handleRequest(r4);
	h1->handleRequest(r5);

	delete h1, h2, h3;
	delete r1, r2, r3, r4, r5;
}
