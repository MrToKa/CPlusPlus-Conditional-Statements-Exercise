#include <iostream>

using namespace std;

int main()
{
	double budget;
	cin >> budget;

	int N, M, P;
	cin >> N >> M >> P;

	double gpu = N * 250;
	double cpu = gpu * 0.35 * M;
	double ram = gpu * 0.1 * P;

	double total = gpu + cpu + ram;

	if (N > M)
	{
		total *= 0.85;
	}

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget >= total)
	{
		cout << "You have " << budget - total <<" leva left!" << endl;
	}
	else
	{
		cout << "Not enough money! You need " << total - budget << " leva more!" << endl;
	}
}
