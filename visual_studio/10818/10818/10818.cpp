#include<iostream>

using namespace std;

void main()
{
	int N = 0, min = 1000000, max = -1000000;

	cin >> N;

	int* n = new int[N];

	for (int i = 1; i <= N; i++)
	{
		cin >> n[i - 1]; //*(n + i - 1);

		if (n[i - 1] < min)
		{
			min = n[i - 1];
		}

		if (n[i - 1] > max)
		{
			max = n[i - 1];
		}
	}

	if (N == 0)
	{
		cout << "Nothing!" << endl;
	}
	else
	{
		cout << min << " " << max << endl;
	}

	delete [] n;
}