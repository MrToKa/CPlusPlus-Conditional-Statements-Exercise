#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	double bonusPoints = 0.0;

	if (number <= 100)
	{
		bonusPoints = 5;
	}
	else if (number > 1000)
	{
		bonusPoints = number * 0.1;
	}
	else
	{
		bonusPoints = number * 0.2;
	}

	if (number % 2 == 0)
	{
		bonusPoints += 1;
	}
	else if (number % 10 == 5)
	{
		bonusPoints += 2;
	}

	cout << bonusPoints << endl;
	cout << number + bonusPoints << endl;
}
