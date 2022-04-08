//#include <iostream>
//
//using namespace std;
//
//int main() {
//	char** sB = new char* [8]();
//	char** sW = new char* [8]();
//
//	for (int i = 0; i < 8; i++) {
//		sB[i] = new char[8 + 1]();
//		sW[i] = new char[8 + 1]();
//	}
//	for (int a = 0; a < 8; a++) {
//		for (int b = 0; b < 8; b++) {
//			if (a % 2 == 0) {
//				if (b % 2 == 0) {
//					sW[a][b] = 'W';
//				}
//				else {
//					sW[a][b] = 'B';
//				}
//			}
//
//			else {
//				if (b % 2 == 0) {
//					sW[a][b] = 'B';
//				}
//				else {
//					sW[a][b] = 'W';
//				}
//			}
//		}
//	}
//	for (int i = 0; i < 8; i++) {
//		cout << sW[i] << "\n";
//	}
//
//	return 0;
//}