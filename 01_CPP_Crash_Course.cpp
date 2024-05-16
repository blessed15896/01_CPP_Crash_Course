#include <print>

import AirlineTicket;

using namespace std;

int main()
{
	AirlineTicket myTicket;
	myTicket.setPassengerName("Blessed Sibanda");
	myTicket.setNumberOfMiles(400);
	double cost{ myTicket.calculatePriceInDollars() };
	println("The ticket will cost ${}", cost);
}

