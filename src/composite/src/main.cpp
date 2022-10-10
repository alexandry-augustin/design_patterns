#include <iostream>
#include <list>
#include <algorithm>

struct Component
{
	virtual void operation()=0;
};

class Leaf: public Component
{
	int m_n;

public:
	Leaf(int n)
		: m_n(n)
	{
	}

	/*virtual*/ void operation()
	{
		std::cout<<"[Component::operation] ["<<m_n<<"]"<<std::endl;
	}
};

class Composite: public Component
{
	std::list<Component*> m_children;

public:
	/*virtual*/ void operation()
	{
		std::list<Component*>::const_iterator it=m_children.begin();
		while(it!=m_children.end())
			(*(it++))->operation();
	}
	void add(Component* comp)
	{
		m_children.push_back(comp);
	}
	void remove(Component* comp)
	{
		m_children.erase(std::remove(m_children.begin(), m_children.end(), comp), m_children.end());
	}
	Component* getChild(int i) const
	{
		std::list<Component*>::const_iterator it=m_children.begin();
		std::advance(it, i);

		return *it;
	}
};

int main()
{
	Composite container_0;
	Component* leaf_1=new Leaf(1);
	container_0.add(leaf_1);
	Component* leaf_2=new Leaf(2);
	container_0.add(leaf_2);

	Composite container_1;
	Component* leaf_0=new Leaf(0);
	container_1.add(leaf_0);
	container_1.remove(leaf_0);
	container_1.add(leaf_0);
	container_1.add(&container_0);

	container_1.operation();
	container_1.getChild(0)->operation();

	delete leaf_0;
	delete leaf_1;
	delete leaf_2;

	return 0;
}
