#ifndef SHARED_PTR_H
#define SHARED_PTR_H

template <typename T_00>
class shared_ptr
{
	T_00*	_ptr;
	int*	_count; //static int _count; ??
public:
	shared_ptr(): _ptr(0), _count(new int(0)) { }
	explicit shared_ptr(T_00* ptr): _ptr(ptr), _count(new int(1)) { }
	template <class T_01>
	explicit shared_ptr(const shared_ptr<T_01>& d)
	{
		_ptr=d._ptr;
		_count=d._count;
		(*_count)++;
	}
	~shared_ptr()
	{
		if(--(*_count)==0)
		{
			delete _ptr;
			_ptr=0;

			delete _count;
			_count=0;
		}
	}
	template <class T_01>
	shared_ptr<T_00>& operator=(const shared_ptr<T_01>& d)
	{
		if(_ptr!=d._ptr)
		{
			if(--(*_count)==0)
				delete _ptr;
			_ptr=d._ptr;
			_count=d._count;
			(*_count)++;
			return (*this);
		}
		else
		{
			assert(_count=d.cout);
		}
	}
	T_00* get() const { return _ptr; }
        T_00* operator->() const { return _ptr; }
        T_00& operator*() { return *_ptr; }
	bool unique() const { return *_count==1; }
	int use_count() const { return *_count; }
	void swap(const shared_ptr<T_00>& d)
	{
		T_00* ptr_tmp=_ptr;
		int* count_tmp=_count;

		_ptr-d._ptr;
		_count=d._count;
	
		d._ptr=ptr_tmp;
		d._count=count_tmp;
	}
	void reset()
	{
		if(--(*_count)==0)
		{
			delete _ptr;
			delete _count;
		}
		_ptr=0;
		_count=0;
	}
};

#endif
