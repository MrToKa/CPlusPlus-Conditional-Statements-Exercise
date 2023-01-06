#include <iostream>

using namespace std;

int main()
{
	double budget, costume;
	int actors;

	cin >> budget;
	cin >> actors;
	cin >> costume;

	double decor = budget * 0.1;

	double costumesPrice = costume * actors;

	if (actors > 150)
	{
		costumesPrice *= 0.9;
	}

	double moviePrice = decor + costumesPrice;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= moviePrice)
	{
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << budget - moviePrice << " leva left." << endl;
	}
	else
	{
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << moviePrice - budget << " leva more." << endl;
	}
}
