#ifndef BASE_H
#define BASE_H

class Base
{
public:
	enum Type
	{
		TYPE_NONE,
		TYPE_A,
		TYPE_B
	};

private:
	int		m_n;
	Base::Type	m_type;

public:
	Base(int n, Base::Type type);

	int& getValue();
	Base::Type& getType();
};

#endif
