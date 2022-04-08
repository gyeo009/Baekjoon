//#include <iostream>
//#include <limits.h>
//
//using namespace std;
//
//int check(int rownum, int colnum, char** b) {
//	int ccase1 = 0, ccase2 = 0;
//	char** contraction = new char* [8]();
//	char** case1 = new char* [8]();
//	char** case2 = new char* [8]();
//	for (int i = 0; i < 8; i++) {
//		contraction[i] = new char[8]();
//		case1[i] = new char[8]();
//		case2[i] = new char[8]();
//	}
//	for (int j = 0; j < 8; j++) {
//		for (int i = 0; i < 8; i++) {
//			contraction[j][i] = b[rownum + j][colnum + i];
//		}
//	}
//	// case 1 : B로 시작
//	for (int n = 0; n < 8; n++) {
//		for (int m = 0; m < 8; m++) {
//			if (n % 2 == 0) {
//				if (m % 2 == 0) {
//					case1[n][m] = 'B';
//				}
//				else {
//					case1[n][m] = 'W';
//				}
//			}
//
//			else {
//				if (m % 2 == 0) {
//					case1[n][m] = 'W';
//				}
//				else {
//					case1[n][m] = 'B';
//				}
//			}
//		}
//	}
//	// case 2 : W로 시작
//	for (int n = 0; n < 8; n++) {
//		for (int m = 0; m < 8; m++) {
//			if (n % 2 == 0) {
//				if (m % 2 == 0) {
//					case1[n][m] = 'W';
//				}
//				else {
//					case1[n][m] = 'B';
//				}
//			}
//
//			else {
//				if (m % 2 == 0) {
//					case1[n][m] = 'B';
//				}
//				else {
//					case1[n][m] = 'W';
//				}
//			}
//		}
//	}
//
//	// case 1과 비교
//	for (int j = 0; j < 8; j++) {
//		for (int i = 0; i < 8; i++) {
//
//			if (contraction[j][i] != case1[j][i])
//				ccase1++;
//		}
//	}
//	// case 2와 비교
//	for (int j = 0; j < 8; j++) {
//		for (int i = 0; i < 8; i++) {
//
//			if (contraction[j][i] != case2[j][i])
//				ccase2++;
//		}
//	}
//
//	for (int i = 0; i < 8; i++) {
//		delete[] contraction[i];
//		delete[] case1[i];
//		delete[] case2[i];
//	}
//	delete[] contraction;
//	delete[] case1;
//	delete[] case2;
//
//
//	if (ccase1 > ccase2) {
//		return ccase2;
//	}
//	else {
//		return ccase1;
//	}
//}
//
//int main() {
//	int row, col; cin >> row >> col;
//
//	char** board = new char* [row]();
//	int* cont = new int[(row - 7) * (col - 7)]();
//
//	for (int i = 0; i < row; i++) {
//		board[i] = new char[col + 1]();
//	}
//	for (int i = 0; i < row; i++) {
//		cin >> board[i];
//	}
//
//	int index = 0;
//	for (int i = 0; i < row - 7; i++) {
//		// col - 7 인가? col - 8인가?
//		for (int j = 0; j < col - 7; j++) {
//			cont[index] = check(i, j, board);
//			index++;
//		}
//	}
//
//	int min = INT_MAX;
//
//	for (int i = 0; i < (row - 7) * (col - 7); i++) {
//		if (cont[i] < min) {
//			min = cont[i];
//		}
//	}
//	cout << min;
//	for (int i = 0; i < row; i++) {
//		delete[] board[i];
//	}
//	delete[] board;
//	delete[] cont;
//
//	return 0;
//}