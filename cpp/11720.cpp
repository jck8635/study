#include<iostream>
#include<string>

using namespace std;

//N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.
int main() {
	int N, sum = 0;
	string num;

	cin >> N >> num;

	//문자열로 입력받은 num을 아스키코드를 연산을 이용하여 int형으로 변환
	for (int i = 0; i < N; i++)
	{
		sum += (num[i] - '0');
	}

	cout << sum;

	return 0;
}