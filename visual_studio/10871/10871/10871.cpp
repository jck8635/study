#include<iostream>

using namespace std;
//문제 정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때 A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
int main() {
	int N, X;

	cin >> N >> X;

	int* n = new int[N];


	for (int i = 1; i <= N; i++)
	{
		cin >> n[i - 1];
	}

	for (int i = 1; i <= N; i++)
	{
		if (n[i - 1] < X)
		{
			cout << n[i - 1] << " ";
		}
	}
	cout << "\n";

	return 0;
}