#include<iostream>

using namespace std;

void main()
{
	int score = 0;

	cin >> score;

	if (score > 0 && score < 100)
	{
		if (score >= 90)
		{
			cout << "A";
		}
		else if (score >= 80 && score < 90)
		{
			cout << "B";
		}
		else if (score >= 70 && score < 80)
		{
			cout << "C";
		}
		else if (score >= 60 && score < 70)
		{
			cout << "D";
		}
		else
		{
			cout << "F";
		}
	}
	else
	{
		cout << "0과 100 사이의 숫자가 아닙니다." << endl;
	}
}