#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;	//공의 수, 무게의 수

	vector<int> arr(m + 1);
	for (int i = 0; i < n; i++) {
		int index;
		cin >> index;
		arr[index]++;
	}

	int result = 0;
	for (int i = 1; i <= m; i++) {
		result += arr[i] * (n - arr[i]);
	}
	result /= 2;
	cout << result << endl;

	return 0;
}