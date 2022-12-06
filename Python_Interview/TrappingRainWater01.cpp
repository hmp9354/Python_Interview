#include <iostream>
#include <algorithm>
using namespace std;

int N;
int height[10000];
int volume = 0;

int main() {
	cin >> N;
	if (!N) return 0;

	for (int i = 0; i < N; i++) {
		cin >> height[i];
	}

	int left = 0, right = N - 1;
	int left_max = height[left];
	int right_max = height[right];

	while (left < right) {
		left_max = max(height[left], left_max);
		right_max = max(height[right], right_max);

		if (left_max <= right_max) {
			volume += left_max - height[left];
			left++;
		}
		else {
			volume += right_max - height[right];
			right--;
		}
	}

	cout << volume;
}