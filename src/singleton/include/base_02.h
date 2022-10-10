#ifndef BASE_02_H
#define BASE_02_H

class base_02
{
	int			_n;

	base_02();
	base_02(const base_02&);		//don't implement
	base_02& operator=(const base_02&);	//don't implement
public:
	static base_02* instance_00();
	static base_02& instance_01();
	int get();
};

#endif
