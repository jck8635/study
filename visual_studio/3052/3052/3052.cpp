#include<iostream>

using namespace std;
// 두 자연수 A와 B가 있을 때, A%B는 A를 B로 나눈 나머지이다. 수 10개를 입력받은 뒤
// 이를 42로 나눈 나머지를 구한다. 그 다음 서로 다른 갑싱 몇 개 있는 지 출력하는 프로그램을 작성하시오.
int main() {
	//숫자 10개를 받을 num 배열 숫자 10개를 42로 나눈 값을 저장할 rest 배열, 다른 값 개수를 세기 위한 cnt 변수
	int num[10] = { 0 }, rest[10] = { 0 }, cnt = 0;

	for (int i = 1; i <= 10; i++)
	{
		cin >> num[i - 1];
		rest[i - 1] = num[i - 1] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		cnt++;
		for (int j = i+1; j < 10; j++)
		{
			if (rest[i] == rest[j]) {
				cnt--;
				break;
			}
		}
		
	}
	/*
	//더 쉬운 boolean을 사용해서 문제를 푸는 방법
	bool check[42] = { false };
	int num, cnt = 0;

	for (int i = 0; i < 10; i++) 
	{
		cin >> num;
		int r = num % 42;
		if(!check[r])
		{
			check[r] = true;
			cnt++;
		}
	}

	*/
	cout << cnt << "\n";

	return 0;
}