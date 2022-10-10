#include "SellOrder.h"
#include <iostream> 
#include "StockExchange.h"

SellOrder::SellOrder(StockExchange* stockExchange)
{
	m_stockExchange=stockExchange;
}

void SellOrder::execute()
{
	m_stockExchange->sell();
}
