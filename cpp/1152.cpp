#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;
	int word = 0;
	getline(cin, s);

	if ((s[0] == ' ' || s[0] == '\n') && s[1] == '\n')
	{
		cout << word << endl;
		return 0;
	}

	for (int i = 1; i <= s.length(); i++)
	{
		if (s[i - 1] == ' ')
		{
			word++;
		}
	}
	if (s[0] != ' ')
	{
		word++;
	}

	if (s[s.length() - 1] == ' ')
	{
		word--;
	}

	cout << word << endl;

	return 0;
}