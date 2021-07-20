#include <iostream>
#include <queue>
using namespace std;

int main() {
	int value[] = { 5,2,8,9,1,24 };
	int count = sizeof(value) / sizeof(value[0]);

	priority_queue<int> pq;
	cout << "maxheap: ";
	for (int i = 0; i < count; i++) {
		cout << value[i] << " ";
		pq.push(value[i]);
	}
	cout << endl;

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << endl;
}