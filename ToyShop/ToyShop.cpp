#include <iostream>

using namespace std;

int main()
{
	double puzzle = 2.6;
	double doll = 3.0;
	double bear = 4.1;
	double minion = 8.2;
	double truck = 2.0;

	double tripPrice;
	cin >> tripPrice;

	int puzzleCount, dollCount, bearCount, minionCount, truckCount;
	cin >> puzzleCount >> dollCount >> bearCount >> minionCount >> truckCount;

	double totalSum = puzzle * puzzleCount + doll * dollCount + bear * bearCount + minion * minionCount + truck * truckCount;

	int toysCount = puzzleCount + bearCount + dollCount + minionCount + truckCount;

	if (toysCount >= 50)
	{
		totalSum *= 0.75;
	}

	totalSum *= 0.9;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (totalSum >= tripPrice)
	{
		cout << "Yes! " << totalSum - tripPrice << " lv left.";
;	}
	else
	{
		cout << "Not enough money! " << tripPrice - totalSum << " lv needed.";
	}
}
