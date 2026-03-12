#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

//첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
//둘째 줄부터 각 테스트 케이스마다 학생의 수 N이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다.
//각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다. 정답과 출력값의 절대/상대 오차는 10-3이하이면 정답이다.
int main() {
	int C;
	
	cin >> C;

	vector<double> result(C);

	for (int i = 0; i < C; i++)
	{
		int N;
		int sum = 0, cnt = 0;
		cin >> N;

		vector<int> score(N, 0);

		for (int j = 0; j < N; j++)
		{
			cin >> score[j];
			sum += score[j];
		}
		double avg = (double)sum / N;

		for (int k = 0; k < N; k++)
		{
			if (score[k] > avg)
			{
				cnt++;
			}
		}
		result[i] = (double)cnt / N * 100;
	}

	//반올림하여 소수점 셋째 자리까지 출력한다.
	for (int i = 0; i < C; i++)
	{
		cout << fixed << setprecision(3) << result[i] << "%\n";
	}

	/*
	for (int i = 0; i < C; i++)
	{
		result[i] = round(1000 * result[i]) / 1000;
		cout << result[i] << "%\n";
	}
	*/
}