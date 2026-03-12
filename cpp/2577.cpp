#include<iostream>

using namespace std;

//문제 세 개의 자연수 A, B, C가 주어질 때 A x B x C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는 지를 구하는 프로그램
int main() {
	int A, B, C;

	//0~9까지의 각각의 숫자가 몇 번 쓰였는 지를 저장할 배열 0으로 초기화
	int cnt[10] = { 0 };

	cin >> A >> B >> C;

	int result = A * B * C;
	int save = result;

	//0~9까지의 각각의 숫자가 몇 번씩 쓰였는 지를 계산하는 while문
	while (save > 0)
	{
		result = save % 10;
		if (result == 0)
			cnt[0]++;
		else if (result == 1)
			cnt[1]++;
		else if (result == 2)
			cnt[2]++;
		else if (result == 3)
			cnt[3]++;
		else if (result == 4)
			cnt[4]++;
		else if (result == 5)
			cnt[5]++;
		else if (result == 6)
			cnt[6]++;
		else if (result == 7)
			cnt[7]++;
		else if (result == 8)
			cnt[8]++;
		else
			cnt[9]++;
		save /= 10;
	}

	for (int i = 1; i <= 10; i++)
	{
		cout << cnt[i - 1] << endl;
	}

	return 0;
}