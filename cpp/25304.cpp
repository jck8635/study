#include<iostream>

using namespace std;

void main()
{
	int total = 0, N = 0, prize = 0, n = 0;
	int sum = 0, compare = 0;

	cin >> total;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> prize >> n;
		sum = prize * n;
		compare += sum;
	}

	if (compare == total)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}