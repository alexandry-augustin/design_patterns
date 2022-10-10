#include "StockExchange.h"
#include <iostream> 

StockExchange::StockExchange() 
{
}

void StockExchange::buy()
{
	std::cout<<"[StockExchange::buy] buying stock."<<std::endl;
}

void StockExchange::sell()
{
	std::cout<<"[StockExchange::sell] selling stock."<<std::endl;
}
