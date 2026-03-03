#include<iostream>
#include<queue>
#include<stack>
#include<string>

using namespace std;

int main()
{
	queue<int> Queue;
	//N 명령어의 수 num push 할 때의 주어지는 정수
	int N, num;
	// order 명령어
	string order;

	cin >> N;

	// 1~10000 사이의 값이 아니면 종료
	if (N < 1 || N > 100000)
	{
		cout << "It's wrong!\n";
		return 0;
	}

	// 주어지는 명령의 수만큼 for문을 돌린다. 해당 for문은 push, pop, size, empty, front, back의 명령어를 수행한다.
	for (int i = 1; i <= N; i++)
	{
		cin >> order;

		if (order == "push")
		{
			cin >> num;
			Queue.push(num);
		}

		else if (order == "pop")
		{
			if (Queue.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << Queue.front() << endl;
				Queue.pop();
			}
		}

		else if (order == "size")
		{
			cout << Queue.size() << endl;
		}

		else if (order == "empty")
		{
			if (Queue.empty())
			{
				cout << "1" << endl;
			}
			else
			{
				cout << "0" << endl;
			}
		}

		else if (order == "front")
		{
			if (Queue.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << Queue.front() << endl;
			}
		}

		else if (order == "back")
		{
			if (Queue.empty())
			{
				cout << "-1" << endl;
			}
			else
			{
				cout << Queue.back() << endl;
			}
		}
	}

	return 0;
}