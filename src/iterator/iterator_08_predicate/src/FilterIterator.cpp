#include "FilterIterator.h"
#include <cassert>

//template<typename T>
//FilterIterator<T>::FilterIterator(const Aggregate<T>* aggregate, Predicate<T>* predicate): 
//	_aggregate(aggregate),
//	_predicate(predicate)
//{
//	assert(_aggregate!=0);
//	assert(_predicate!=0);
//	
//	first();	
//}

//template<typename T>
///*virtual*/ void FilterIterator<T>::first()
//{
//	 _currentIndex=0;
//	while(!isDone())
//	if(_predicate->operator()(currentItem()))
//		break;
//	else
//		++_currentIndex;
//}

//template<typename T>
///*virtual*/ void FilterIterator<T>::next()
//{
//	while(true)
//	{
//		++_currentIndex;
//		if(isDone())
//			break;
//		if(_predicate->operator()(currentItem()))
//			break;
//	}
//}

//template<typename T>
///*virtual*/ T FilterIterator<T>::currentItem()
//{
//	assert(!isDone());
//	
//	return _aggregate->get(_currentIndex);
//}

//template<typename T>
///*virtual*/ bool FilterIterator<T>::isDone()
//{
//	if(_currentIndex>=_aggregate->size())
//		return true;
//	
//	return false;
//}

