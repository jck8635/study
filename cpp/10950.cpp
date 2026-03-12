#include<iostream>

using namespace std;

void main()
{
	int T = 0, A = 0, B = 0;
	int sum[100] = { 0 };

	cin >> T;

	for (int i = 1; i <= T; i++)
	{
		cin >> A >> B;
		sum[i - 1] = A + B;
	}

	for (int j = 1; j <= T; j++)
	{
		cout << sum[j-1] << endl;
	}

}