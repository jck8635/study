#include<iostream>

using namespace std;

void main()
{
	int N = 0;
	string star = "*";

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}