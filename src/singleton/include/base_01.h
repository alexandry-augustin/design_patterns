#ifndef BASE_01_H
#define BASE_01_H

class base_01
{
	int			_n;
	static base_01*		_instance;

	base_01();
	base_01(const base_01&);		//don't implement
	base_01& operator=(const base_01&);	//don't implement
public:
	static base_01* instance();
	int get();
};

#endif
