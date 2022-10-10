//ConcreteCommand2
#ifndef SELLORDER_H
#define SELLORDER_H

#include "Command.h"

class StockExchange;

class SellOrder: public Command
{
	StockExchange* m_stockExchange;

public:
	SellOrder(StockExchange* stockExchange);

	void execute();
};
#endif
