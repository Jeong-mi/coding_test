#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> arr;
vector<int> dt(100, 0);

int fibo(int x) {
	//이미 내가 보관해논 것을 꺼내쓰는 부분
	if (dt[x] != 0)
		return dt[x];

	//새로 채우는 부분
	dt[x] = fibo(x - 2) + fibo(x - 1);
	return dt[x];
}

int main() {
	dt[1] = dt[2] = 1;;
	int result = fibo(40);
	cout << result << endl;
	return 0;
}