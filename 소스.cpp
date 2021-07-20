#include <iostream>
#include <queue>
using namespace std;

int main() {
	string str;
	cin >> str;
	int result = str[0] - '0';
	for (int i = 1; i < str.size(); i++) {
		int n = str[i] - '0';
		if (result <= 1 || n <= 1)
			result += n;
		else
			result *= n;
	}
	cout << result;
}