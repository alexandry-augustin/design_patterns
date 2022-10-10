//ConcreteCommand1
#ifndef BUYORDER_H
#define BUYORDER_H

#include "Command.h"

class StockExchange;

class BuyOrder: public Command
{
	StockExchange* m_stockExchange;

public:
	BuyOrder(StockExchange* stockExchange);

	void execute();
};
#endif
