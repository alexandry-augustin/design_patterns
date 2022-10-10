#ifndef NOTIFIER_H
#define NOTIFIER_H

// linked list code based on http://www.lemoda.net/c/doubly-linked-list/dll.c

template <typename T>
class notifier
{
public:
	class Observer
	{
	public:
		Observer(bool a=true): next_(0), prev_(0), added_(false)
		{
			if(a)
				add();
		}
		~Observer()
		{
			remove();
		}
		void add()
		{
			if(!added_)
			{
				notifier<T>::addObserver(this);
				added_=true;
			}
		}
		void remove()
		{
			if(added_)
			{
				notifier<T>::removeObserver(this);
				added_=false;
			}
		}
		virtual void update(T &notification)=0;

		// implement our own doubly linked list
		Observer* next_;
		Observer* prev_;
		bool added_;
	};
	struct List
	{
		Observer* first_;
		Observer* last_;

		List(): first_(0), last_(0) { }
	};
	static List& getList()
	{
		static List list;
		return list;
	}
	static void addObserver(Observer* o)
	{
		List& list(getList());

		if(list.last_)
		{
			// join the two final links together
			list.last_->next_=o;
			o->prev_=list.last_;
			list.last_=o;
		}
		else
		{
			list.first_=o;
			list.last_=o;
		}
	}
	static void removeObserver(Observer* o)
	{
		Observer* prev=o->prev_;
		Observer* next=o->next_;
		List& list(getList());

		if(prev)
		{
			if(next)
			{
				// Both the previous and next links are valid, so just
				// bypass "link" without altering "list" at all.
				prev->next_=next;
				next->prev_=prev;
			}
			else
			{
				// Only the previous link is valid, so "prev" is now
				// the last link in "list".
				prev->next_=0;
				list.last_=prev;
			}
		}
		else
		{
			if(next)
			{
				// Only the next link is valid, not the previous one,
				// so "next" is now the first link in "list".
				next->prev_=0;
				list.first_=next;
			}
			else
			{
				// Neither previous nor next links are valid,
				// so the list is now empty.
				list.first_=0;
				list.last_=0;
			}
		}
	}
	static void notify(T& notification)
	{
		for(Observer* p=getList().first_; p; p=p->next_)
			p->update(notification);
	}
};
#endif
