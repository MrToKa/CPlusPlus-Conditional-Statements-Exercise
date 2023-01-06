#include <iostream>

using namespace std;

int main()
{
	int hours, minutes;
	cin >> hours >> minutes;

	int timeInMinutes = hours * 60 + minutes + 15;

	int finalHours = timeInMinutes / 60;
	int finalMinutes = timeInMinutes % 60;

	if (finalHours >= 24)
	{
		finalHours -= 24;
	}

	if (finalMinutes < 10)
	{
		cout << finalHours << ":0" << finalMinutes;
	}
	else
	{
		cout << finalHours << ":" << finalMinutes;
	}
}
