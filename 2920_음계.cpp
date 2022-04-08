//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int* input = new int[8];
//
//	for (int i = 0; i < 8; i++) {
//		cin >> input[i];
//	}
//
//	bool achecker = 1;
//	bool dchecker = 1;
//	if (input[0] == 1) {
//		for (int i = 0; i < 8; i++) {
//			if (i + 1 != input[i]) {
//				achecker = false;
//				break;
//			}
//		}
//		if (achecker == 1) {
//			cout << "ascending";
//		}
//		else {
//			cout << "mixed";
//		}
//	}
//	else if (input[0] == 8) {
//		for (int i = 0; i < 8; i++) {
//			if (8 - i != input[i]) {
//				dchecker = false;
//				break;
//			}
//		}
//		if (dchecker == 1) {
//			cout << "descending";
//		}
//		else {
//			cout << "mixed";
//		}
//	}
//	else {
//		cout << "mixed";
//	}
//
//
//
//	return 0;
//}