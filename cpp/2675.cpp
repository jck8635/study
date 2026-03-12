#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char S[21] = "";
	int R = 0, num = 0;

	cin >> num;

	string* P = new string[num];

	for (int i = 1; i <= num; i++)
	{
		memset(S, 0, 21);
		cin >> R >> S;
		int len = (int)strlen(S);
		for (int j = 1; j <= len; j++)
		{
			for (int k = 1; k <= R; k++)
			{
				P[i - 1] += S[j - 1];
			}
		}
	}

	for (int i = 1; i <= num; i++)
	{
		cout << P[i - 1] << endl;
	}

	delete [] P;

	return 0;
}