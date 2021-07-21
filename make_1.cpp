#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//top-down 방식, 다이나믹x

int fn(int n) {
	if (n == 1)
		return 0;

	int count = fn(n - 1);
	if ((n % 5) == 0)
		count = min(count,fn(n / 5));
	if ((n % 3) == 0)
		count = min(count, fn(n / 3)); 
	if ((n % 2) == 0)
		count = min(count, fn(n / 2));
	return count + 1;
}

int main() {
	int n;
	cin >> n;
	int count = fn(n);
	cout << count << endl;
	return 0;
}