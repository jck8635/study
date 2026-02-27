#include<iostream>

using namespace std;


void main()
{
	int N = 0;

	cin >> N;

	for (int i = 0; i < 10; i++)
	{
		cout << N << " * " << i << " = " << N * i << endl;
	}
}