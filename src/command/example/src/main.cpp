#include "StockExchange.h" 
#include "StockAgent.h" 
#include "BuyOrder.h" 
#include "SellOrder.h" 

int main(int argc, char* argv[])
{
	StockExchange stockExchange;

	BuyOrder buy1(&stockExchange);
	SellOrder sell1(&stockExchange);
	BuyOrder buy2(&stockExchange);
	SellOrder sell2(&stockExchange);

	StockAgent agent;
/*	agent.order(new BuyOrder(&stockExchange));
	agent.order(new SellOrder(&stockExchange));
	agent.order(new BuyOrder(&stockExchange));
	agent.order(new SellOrder(&stockExchange));*/
	agent.order(&buy1);
	agent.order(&sell1);
	agent.order(&buy2);
	agent.order(&sell2);

	agent.execute();

	return 0;
}

