#include<iostream>
#include<vector>

using namespace std;

//stack 직접 구현 해보기
template <typename J>
class Stack {
private:
	vector <J>  N;
public:
	void push(const J& value) {
		N.push_back(value);
	}
	void pop() {
		if (empty())
			throw runtime_error("empty stack");
		N.pop_back();
	}
	J top() const {
		if (empty())
			throw runtime_error("empty stack");
		return N.back();
	}
	size_t size() const {
		return N.size();
	}
	bool empty() const {
		return N.empty();
	}
};

int main() {
	Stack <int> n;

	n.push(10);
	n.push(20);
	n.push(30);
	cout << "top = " << n.top() << "\n";
	cout << "size = " << n.size() << "\n";
	n.pop();
	cout << "top = " << n.top() << "\n";
	cout << "size = " << n.size() << "\n";
	n.pop();
	cout << "top = " << n.top() << "\n";
	cout << "size = " << n.size() << "\n";

	return 0;
}