#include "BuyOrder.h"
#include <iostream> 
#include "StockExchange.h"

BuyOrder::BuyOrder(StockExchange* stockExchange)
{
	m_stockExchange=stockExchange;
}

void BuyOrder::execute()
{
	m_stockExchange->buy();
}
