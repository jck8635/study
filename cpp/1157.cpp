#include<iostream>
#include<string>

using namespace std;
//26-03-13
//알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
//첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
int main() {
	string words;
	int cnt[26] = { 0 };

	cin >> words;

	for (int i = 0; i < words.length(); i++)
	{
		//알파벳만 들어온다고 해서 이렇게 사용해도 상관은 없음.
		cnt[toupper(words[i]) - 'A']++;

		/* 
		char c = toupper(words[i]);
		cnt[c - 'A']++;
		*/
	}

	int max = 0;
	int idx = -1;
	bool duplicate = false;

	for (int i = 0; i < 26; i++)
	{
		if (cnt[i] > max)
		{
			max = cnt[i];
			idx = i;
			duplicate = false;
		}
		else if (cnt[i] == max)
		{
			duplicate = true;
		}
	}

	if (duplicate)
	{
		cout << "?\n";
	}
	else
	{
		cout << char(idx + 'A') << "\n";
	}

	return 0;
}