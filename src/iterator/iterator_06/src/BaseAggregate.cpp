#include "BaseAggregate.h"
#include "BaseTypeIterator.h"
#include "Base.h"

BaseAggregate::BaseAggregate()
{
}

void BaseAggregate::add(Base* base)
{
	_values.push_back(base);
}

/*virtual*/ Iterator<Base*>* BaseAggregate::iterator() const
{
	return 0;
}

Iterator<Base*>* BaseAggregate::iterator(Base::Type type) const
{
	return new BaseTypeIterator(this, type);
}

/*virtual*/ Base* BaseAggregate::get(int index) const
{
	return _values.at(index);
}

/*virtual*/ int BaseAggregate::size() const
{
	return _values.size();
}

