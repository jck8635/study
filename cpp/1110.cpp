#include<iostream>

using namespace std;

void main()
{
	int N = 0, N1 = 0, new_N = 0;
	int cycle = 0;

	cin >> N;

	if (N < 10)
	{
		N *= 10;
	}
	new_N = N;
	do 
	{
		new_N = 10 * (new_N % 10) + ((new_N / 10) + (new_N % 10)) % 10;
		++cycle;
	} while (new_N != N);

	cout << cycle;
}