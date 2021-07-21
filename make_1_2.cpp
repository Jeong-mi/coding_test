#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//다이나믹
#define INF 1000

vector<int> dt(30001, INF);

int fn(int n) {
	if (n == 1) {
		dt[1] = 0;		//채워놓고
		return dt[1];	//호출
	}
		
	if (dt[n] != INF)
		return dt[n];

	int count = fn(n - 1);
	if ((n % 5) == 0)
		count = min(count, fn(n / 5));
	if ((n % 3) == 0)
		count = min(count, fn(n / 3));
	if ((n % 2) == 0)
		count = min(count, fn(n / 2));
	dt[n] = count + 1;
	return dt[n];
}

int main() {
	int n;
	cin >> n;
	int count = fn(n);
	cout << count << endl;
	return 0;
}