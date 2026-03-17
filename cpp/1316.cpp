#include<iostream>
#include<string>

using namespace std;
//그룹 단어란 단어에 존재하는 모든 문자에 대해서, 각 문자가 연속해서 나타나는 경우만을 말한다. 예를 들면, ccazzzzbb는 c, a, z, b가 모두 연속해서 나타나고, 
//kin도 k, i, n이 연속해서 나타나기 때문에 그룹 단어이지만, aabbbccb는 b가 떨어져서 나타나기 때문에 그룹 단어가 아니다.
//단어 N개를 입력으로 받아 그룹 단어의 개수를 출력하는 프로그램을 작성하시오.
int main() {
	//해당 알파벳이 나왔는 지 알기 위한 bool 배열
	bool alp[26];
	string word;
	int N, cnt = 0;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		//입력 받기 전에 false로 다 초기화 시켜줌
		for (int j = 0; j < 26; j++)
		{
			alp[j] = false;
		}

		cin >> word;

		//이전 문자 기억하기 위한 char 변수
		char prev = word[0];
		alp[prev - 'a'] = true;
		bool isGroup = true;

		for (int k = 1; k < word.length(); k++)
		{
			int check = word[k] - 'a';
			//이전 알파벳과 다르면
			if (word[k] != prev)
			{
				//해당 알파벳이 나왔던 알파벳인 지 확인
				if (alp[check])
				{
					isGroup = false;
					break;
				}
				alp[check] = true;
			}
			prev = word[k];
		}
		if (isGroup)
		{
			cnt++;
		}
	}

	cout << cnt << "\n";
}