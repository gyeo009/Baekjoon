#include <iostream>

using namespace std;


int main() {
	int N, M; cin >> N >> M;
	int array[5];
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << array[i] - N * M << ' ';
	}
	

	return 0;
}