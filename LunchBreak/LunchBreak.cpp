#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	string movie;	
	getline(cin, movie);

	int length, lunchBreak;
	cin >> length >> lunchBreak;

	double lunchTime = lunchBreak / 8.0;
	double relaxTime = lunchBreak / 4.0;
	double timeLeft = lunchBreak - lunchTime - relaxTime;

	if (timeLeft >= length)
	{
		cout << "You have enough time to watch " << movie << " and left with " << ceil(timeLeft - length) << " minutes free time." << endl;
	}
	else
	{
		cout << "You don't have enough time to watch " << movie << ", you need " << ceil(length - timeLeft) << " more minutes." << endl;
	}
}
