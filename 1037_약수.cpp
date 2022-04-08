//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	int* p = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> p[i];
//	}
//
//	// 정렬해버려
//	int temp = 0;
//	for (int i = 0; i < n - 1; i++) {
//
//		// 한 원소와 그 다음 원소 비교
//		if (p[i] > p[i + 1]) {
//			temp = p[i];
//			p[i] = p[i + 1];
//			p[i + 1] = temp;
//			if (i == 0) continue;
//
//			// 비교하여 위치 변환시 그 원소와 그 이전원소들의 크기 비교
//			for (int j = i; j > 0; j--) {
//				if (p[j - 1] > p[j]) {
//					temp = p[j];
//					p[j] = p[j - 1];
//					p[j - 1] = temp;
//				}
//			}
//		}
//	}
//
//	cout << (p[0]) * (p[n - 1]);
//
//
//
//
//
//	delete[] p;
//	return 0;
//}