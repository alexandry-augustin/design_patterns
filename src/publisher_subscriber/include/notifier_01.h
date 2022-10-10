#ifndef NOTIFIER_01_H
#define NOTIFIER_01_H

#include <list>

template <typename T>
class notifier
{
public:
	class observer
	{
		bool _added;
	public:
		observer(): _added(false)
		{
		}
		~observer()
		{
			remove();
		}
		void add()
		{
			if(_added)
				return;

			notifier<T>::add_observer(this);
			_added=true;
		}
		void remove()
		{
			if(_added)
			{
				notifier<T>::remove_observer(this);
				_added=false;
			}
		}
		virtual void update(T &notification)=0;
	};
private:
	static std::list<observer*> list;
public:
	static void add_observer(observer* o)
	{
		list.push_back(o);
	}
	static void remove_observer(observer* o)
	{
	}
	static void notify(T& notification)
	{
		for(typename std::list<observer*>::iterator it=list.begin(); it!=list.end(); ++it)
			(*it)->update(notification);
	}
};

template<typename T>
std::list<typename notifier<T>::observer*> notifier<T>::list;

#endif
