#include<iostream>
#include<string>

using namespace std;


//"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
//"OOXXOXXOOO"의 점수는 1 + 2 + 0 + 0 + 1 + 0 + 0 + 1 + 2 + 3 = 10점이다.
//OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
int main() {
	//OX 퀴즈 결과를 저장할 string 변수
	string q;
	//OX 퀴즈 결과의 개수
	int N;

	cin >> N;

	//OX 퀴즈의 점수를 저장할 cnt와 score 배열
	int* cnt = new int[N]();
	int* score = new int[N]();

	for (int i = 0; i < N; i++)
	{
		cin >> q;
		for (int j = 0; j < q.length(); j++)
		{
			if (q[j] == 'O')
			{
				cnt[i]++;
				score[i] += cnt[i];
			}
			else
			{
				cnt[i] = 0;
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << score[i] << "\n";
	}

	delete[] cnt;
	delete[] score;
	return 0;
}