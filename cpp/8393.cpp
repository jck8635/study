#include<iostream>

using namespace std;

void main()
{
	int n = 0;
	int sum = 0;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	cout << sum;
}