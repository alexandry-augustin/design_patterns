#include <iostream>
#include <string>
#include <vector>

class Memento
{
	friend class Originator;

	std::string m_state;

	Memento()
	{
	}
	std::string getState() const
	{
		return m_state;
	}
	void setState(std::string state)
	{
		m_state=state;
		std::cout<<"[Memento::setState] Saving Originator state ["<<m_state<<"]."<<std::endl;
	}
public:
	~Memento() 
	{ 
	}
};

class Originator
{
	std::string m_state;
public:
	Originator()
	{
	}
	Memento* createMemento() //checkPoint
	{
		Memento* memento=new Memento();
		memento->setState(m_state);

		return memento;
	}
	void setMemento(Memento* memento)//rollBack
	{
		m_state=memento->m_state;
		std::cout<<"[Originator::rollBack] Rolling back Originator to ["<<m_state<<"]."<<std::endl;
	}
	std::string get() const
	{
		return m_state;
	}
	void set(std::string state)
	{
		m_state=state;
		std::cout<<"[Originator::set] Originator set to ["<<m_state<<"]."<<std::endl;
	}
};

class Caretaker //doesn't have access to Memento's internal
{
	std::vector<Memento*> 	m_memento;
	
public:
	Caretaker()
	{
	}
	~Caretaker()
	{
		for(int i=0; i<m_memento.size(); ++i)
			delete m_memento[i];
	}
	void saveState(Originator* originator)
	{
		m_memento.push_back(originator->createMemento());
	}
	void restoreState(Originator* originator, int stateNumber)
	{
		originator->setMemento(m_memento[stateNumber]);
	}
};

int main() 
{
	Originator originator;
	Caretaker caretaker;

        originator.set("state0");
        caretaker.saveState(&originator);

        originator.set("state1");
        caretaker.saveState(&originator);

        originator.set("state2");
        caretaker.saveState(&originator);

        caretaker.restoreState(&originator, 1);

	return 0;
}
