#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int N;
int height[10000];
int volume = 0;

int main() {
	cin >> N;
	if (!N) return 0;
	stack<int> s;

	for (int i = 0; i < N; i++) {
		cin >> height[i];		
	}

	int top = 0;
	int distance = 0;
	int waters = 0;

	for (int i = 0; i < N; i++) {
		while (s.size() && (height[i] > height[s.top()]))
		{
			top = s.top();
			s.pop();

			if (!s.size()) break;

			distance = i - s.top() - 1;
			waters = min(height[i], height[s.top()]) - height[top];

			volume += distance * waters;
		}
		s.push(i);
	}

	cout << volume;
}