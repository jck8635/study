#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main()
{
	//N 명령어의 수 num push 할 때의 주어지는 정수
	int N, num;
	stack<int> Stack;
	// order 명령어
	string order;

	cin >> N;

	// 1~10000 사이의 값이 아니면 종료
	if (N < 1 || N > 10000)
	{
		cout << "It's wrong!\n";
		return 0;
	}

	// 주어지는 명령의 수만큼 for문을 돌린다. 해당 for문은 push, pop, size, empty, top의 명령어를 수행한다.
	for (int i = 1; i <= N; i++)
	{
		cin >> order;

		if (order == "push")
		{
			cin >> num;
			Stack.push(num);
		}
		else if (order == "pop")
		{
			if (Stack.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << Stack.top() << endl;
				Stack.pop();
			}
		}
		else if (order == "size")
		{
			cout << Stack.size() << endl;
		}
		else if (order == "empty")
		{
			if (Stack.empty())
			{
				cout << "1" << endl;;
			}
			else
			{
				cout << "0" << endl;
			}
		}
		else if (order == "top")
		{
			if (Stack.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << Stack.top() << endl;
			}
		}
	}


	return 0;
}