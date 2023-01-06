#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double record, length, speed;
	cin >> record >> length >> speed;

	double swimTime = length * speed;
	double waterFriction = floor(length / 15) * 12.5;
	double totalTime = swimTime + waterFriction;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (record <= totalTime)
	{
		cout << "No, he failed! He was " << totalTime - record << " seconds slower." << endl;
	}
	else
	{
		cout << "Yes, he succeeded! The new world record is " << totalTime << " seconds." << endl;
	}
}
