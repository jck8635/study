#include<iostream>

using namespace std;

void main()
{
	int N = 0, n[100] = { 0 }, v = 0, cnt = 0;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> n[i];
	}

	cin >> v;

	for (int j = 1; j <= N; j++)
	{
		if (n[j] == v)
		{
			cnt++;
		}
	}

	cout << cnt << endl;
}