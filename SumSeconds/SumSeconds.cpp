#include <iostream>

using namespace std;

int main()
{
	int timeFirst, timeSecond, timeThird;
	cin >> timeFirst >> timeSecond >> timeThird;

	int totalTime = timeFirst + timeSecond + timeThird;

	int minutes = totalTime / 60;
	int seconds = totalTime % 60;

	if (seconds < 10)
	{
		cout << minutes << ":0" << seconds << endl;
	}
	else
	{
		cout << minutes << ":" << seconds << endl;
	}
}
