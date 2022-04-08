//#include <iostream>
//#include <limits.h>
//using namespace std;
//
//int main() {
//	int m, n; cin >> m >> n;
//
//	// 문제 입력받을 2차원 배열
//	// m행 n열
//
//	char** input = new char* [m];
//
//	for (int i = 0; i < m; i++) {
//		input[i] = new char[n + 1];
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> input[i];
//	}
//
//	// input[ 0,1,2, ... , m-1 ][ 0, 1, 2, ... , n-1 ]에 다 들어가있음
//
//	//[0][0]이 B부터 시작,
//
//	// Start_with_B
//	char** sB = new char* [8]();
//	char** sW = new char* [8]();
//
//	for (int i = 0; i < 8; i++) {
//		sB[i] = new char[8 + 1]();
//		sW[i] = new char[8 + 1]();
//	}
//
//	for (int a = 0; a < 8; a++) {
//		for (int b = 0; b < 8; b++) {
//			if (a % 2 == 0) {
//				if (b % 2 == 0) {
//					sB[a][b] = 'B';
//				}
//				else {
//					sB[a][b] = 'W';
//				}
//			}
//
//			else {
//				if (b % 2 == 0) {
//					sB[a][b] = 'W';
//				}
//				else {
//					sB[a][b] = 'B';
//				}
//			}
//		}
//	}
//
//
//
//	//[0][0]이 W부터 시작
//	// Start_with_W
//
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
//
//
//	int min = INT_MAX; int past = INT_MAX;
//	// 외부의 for문 2개는 브루트포스용 반복문
//	for (int i = 0; i < m - 7; i++) {
//		for (int j = 0; j < n - 7; j++) {
//			// 확인 할 곳
//			// count1은 [0][0]이 B부터 시작,
//			// count2는          W부터 시작
//			int countB = 0, countW = 0;
//			for (int p = i; p < i + 8; p++) {
//				for (int q = j; q < j + 8; q++) {
//					// 초항에서 sB[p-i][q-j] 는 sB[0][0]
//					if (input[p][q] != sB[p - i][q - j]) {
//						countB++;
//					}
//					if (input[p][q] != sW[p - i][q - j]) {
//						countW++;
//					}
//				}
//			}
//			past = min;
//			if (countB > countW) {
//				min = countW;
//			}
//			else {
//				min = countB;
//			}
//
//			if (min < past) {
//				min = min;
//			}
//			else {
//				min = past;
//			}
//		}
//	}
//	cout << min;
//
//
//
//
//
//	for (int i = 0; i < m; i++) {
//		delete[] input[i];
//	}
//	for (int i = 0; i < 8; i++) {
//		delete[] sW[i];
//		delete[] sB[i];
//	}
//	delete[] input;
//	delete[] sW;
//	delete[] sB;
//
//	return EXIT_SUCCESS;
//}