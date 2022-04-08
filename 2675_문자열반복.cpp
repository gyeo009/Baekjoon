//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	int tc; cin >> tc;
//
//	char** input = new char* [tc];
//	int* ct = new int[tc];
//	for (int i = 0; i < tc; i++) {
//		input[i] = new char[20 + 1];
//	}
//	for (int i = 0; i < tc; i++) {
//		cin >> ct[i] >> input[i];
//	}
//
//	for (int i = 0; i < tc; i++) {
//		for (int j = 0; input[i][j] != 0; j++) {
//			for (int k = 0; k < ct[i]; k++) {
//				cout << input[i][j];
//			}
//		}
//		cout << '\n';
//	}
//	for (int i = 0; i < tc; i++) {
//		delete[] input[i];
//	}
//	
//	delete[] input;
//	delete[] ct;
//
//	return 0;
//}