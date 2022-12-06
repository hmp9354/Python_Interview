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
		nums_map[nums[i]] = i;
	}

	for (int i = 1; i <= N; i++) {
		if (nums_map[target - nums[i]] && i != nums_map[target - nums[i]]) {
			cout << i-1 << " " << nums_map[target - nums[i]]-1;
			return 0;
		}
	}
}