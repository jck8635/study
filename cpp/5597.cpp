#include<iostream>
#include<vector>

using namespace std;

//26-03-13
//X대학 M교수님은 프로그래밍 수업을 맡고 있다. 교실엔 학생이 30명이 있는데, 학생 명부엔 각 학생별로 1번부터 30번까지 출석번호가 붙어 있다.
//교수님이 내준 특별과제를 28명이 제출했는데, 그 중에서 제출 안 한 학생 2명의 출석번호를 구하는 프로그램을 작성하시오.
int main() {
	//과제 제출한 사람을 확인하기 위한 vector 변수
	vector <bool> check(31, false);

	//28명의 출석번호를 입력한다
	for (int i = 0; i < 28; i++)
	{
		int num;
		cin >> num;

		check[num] = true;
	}

	//출석번호가 없는 사람을 찾아내 알려줌
	for (int i = 1; i < 31; i++)
	{
		if (check[i] == false)
		{
			cout << i << endl;
		}
	}

	return 0;
}