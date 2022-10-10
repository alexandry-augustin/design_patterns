#include "pimpl.h"

struct base::impl
{
	int _n;

	impl():
		_n(0)
	{
	}
};

base::base():
	_pimpl(new impl())
{
}

int base::get_n() const
{
	return _pimpl->_n;
}
