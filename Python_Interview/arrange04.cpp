#include <iostream>
using namespace std;

int N, target;
int nums[10000] = { 0, };
int nums_map[10000] = { 0, };

int main() {

	cin >> N >> target;

	for (int i = 1; i <= N; i++) {
		cin >> nums[i];
	}	

	for (int i = 1; i <= N; i++) {
		if (nums_map[target - nums[i]]) {
			cout << nums_map[target - nums[i]] - 1 << " " << i - 1;
			return 0;
		}
		nums_map[nums[i]] = i;
	}
}