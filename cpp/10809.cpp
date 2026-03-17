#include<iostream>
#include<string>

using namespace std;

//알파벳 소문자로만 이루어진 단어 S가 주어진다. 각각의 알파벳에 대해서, 단어에 포함되어 있는 경우에는 처음 등장하는 위치를, 
//포함되어 있지 않은 경우에는 -1을 출력하는 프로그램을 작성하시오.
int main() {
	string S;
	int loc[26];

	for (int i = 0; i < 26; i++)
	{
		loc[i] = -1;
	}

	cin >> S;

	for (int i = 0; i < S.length(); i++)
	{
		int index = S[i] - 'a';
		if (loc[index] == -1)
		{
			loc[index] = i;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << loc[i] << " ";
	}

}