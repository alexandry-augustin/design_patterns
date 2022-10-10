#ifndef BASE_00_H
#define BASE_00_H

class base_00
{
	int			_n;
	static base_00*		_instance;

	base_00();
	base_00(const base_00&);		//don't implement
	base_00& operator=(const base_00&);	//don't implement
public:
	static base_00* instance();
	int get();
};

#endif
