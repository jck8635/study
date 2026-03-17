#include<iostream>
#include<string>

using namespace std;

//예전에는 운영체제에서 크로아티아 알파벳을 입력할 수가 없었다. 따라서, 다음과 같이 크로아티아 알파벳을 변경해서 입력했다.
//č -> c= ć -> c- dž -> dz= đ -> d- lj -> lj nj -> nj š -> s= ž -> z=
//입력으로 주어진 단어가 몇 개의 크로아티아 알파벳으로 이루어져 있는지 출력한다.
int main() {
	string S;
	int cnt = 0;
	int search;

	cin >> S;

	//int로 숫자 저장해서 한 번 해봄 오류 날 가능성 많긴 하겠지만 백준 기준 돌아가긴 함
	for (int i = 0; i < S.length(); i++)
	{
		search = S[i] - 'a';
		if (search >= 0)
		{
			cnt++;
			//c
			if (search == 2)
			{
				if (i < S.length())
				{
					if (S[i + 1] == '=')
					{
						++i;
					}
					else if (S[i + 1] == '-')
					{
						++i;
					}
				}
			}
			//d
			else if (search == 3)
			{
				if (i < S.length())
				{
					if (S[i + 1] == '-')
					{
						++i;
					}
					else if (S[i + 1] == 'z')
					{
						if (S[i + 2] == '=')
						{
							i += 2;
						}
					}
				}
			}
			//l
			else if (search == 11)
			{
				if (i < S.length())
				{
					if (S[i + 1] == 'j')
					{
						++i;
					}
				}
			}
			//n
			else if (search == 13)
			{
				if (i < S.length())
				{
					if (S[i + 1] == 'j')
					{
						++i;
					}
				}
			}
			//s
			else if (search == 18)
			{
				if (i < S.length())
				{
					if (S[i + 1] == '=')
					{
						++i;
					}
				}
			}
			//z
			else if (search == 25)
			{
				if (i < S.length())
				{
					if (S[i + 1] == '=')
					{
						++i;
					}
				}
			}
		}
	}


	cout << cnt << "\n";

	/* 문자로 바로 체크
	for (int i = 0; i < S.length(); i++)
    {
        cnt++;

        // c=, c-
        if (S[i] == 'c' && i + 1 < S.length())
        {
            if (S[i + 1] == '=' || S[i + 1] == '-')
                i++;
        }
        // d-, dz=
        else if (S[i] == 'd' && i + 1 < S.length())
        {
            if (S[i + 1] == '-')
                i++;
            else if (S[i + 1] == 'z' && i + 2 < S.length() && S[i + 2] == '=')
                i += 2;
        }
        // lj
        else if (S[i] == 'l' && i + 1 < S.length())
        {
            if (S[i + 1] == 'j')
                i++;
        }
        // nj
        else if (S[i] == 'n' && i + 1 < S.length())
        {
            if (S[i + 1] == 'j')
                i++;
        }
        // s=
        else if (S[i] == 's' && i + 1 < S.length())
        {
            if (S[i + 1] == '=')
                i++;
        }
        // z=
        else if (S[i] == 'z' && i + 1 < S.length())
        {
            if (S[i + 1] == '=')
                i++;
        }
    }
	*/
}