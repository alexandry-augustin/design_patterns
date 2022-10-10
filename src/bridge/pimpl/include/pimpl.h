#ifndef BASE_H 
#define BASE_H 

class base
{
	struct impl;	//forward-declaration

	impl*	_pimpl;	//hidden implementation
public:
	base();
	int get_n() const;
};

#endif
