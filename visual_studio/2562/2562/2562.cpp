#include<iostream>

using namespace std;

void main()
{
	int num[9] = { 0 }, max = 0;

	for (int i = 1; i < 10; i++)
	{
		cin >> num[i-1];
		if (num[i - 1] > max)
		{
			max = num[i - 1];
		}
	}

	for (int j = 1; j < 10; j++)
	{
		if (max == num[j - 1])
		{
			cout << num[j - 1] << endl;
			cout << j;
		}
	}
}