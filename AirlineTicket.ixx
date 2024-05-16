#include <string>

using namespace std;

export module AirlineTicket;

export class AirlineTicket
{
public:
	double calculatePriceInDollars()
	{
		if (hasEliteSuperRewardsStatus()) { return 0; }
		return getNumberOfMiles() * 0.1;
	}

	string getPassengerName() { return m_passengerName; }
	void setPassengerName(string name) { m_passengerName = name; }

	int getNumberOfMiles() { return m_numberOfMiles; }
	void setNumberOfMiles(int miles) { m_numberOfMiles = miles; }

	bool hasEliteSuperRewardsStatus() { return m_hasEliteSuperRewardsStatus; }
	void setHasEliteSuperRewardsStatus(bool status) {
		m_hasEliteSuperRewardsStatus = true;
	}

private:
	string m_passengerName{ "Unknown Passenger" };
	int m_numberOfMiles{ 0 };
	bool m_hasEliteSuperRewardsStatus{ false };
};

