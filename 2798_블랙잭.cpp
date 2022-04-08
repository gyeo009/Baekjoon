//#include <iostream>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
//
//
//// 브루트 포스 방법
//int main() {
//	int n, sum; cin >> n >> sum;
//
//	vector<int> v(n);
//
//	for (int i = 0; i < n; i++) cin >> v[i];
//
//	// 조합
//	int make = 0;
//
//	// 간격
//	int dt = INT_MAX;
//
//	// 3중 for문 ㅋㅋ			 // sum = 21
//	make = v[0] + v[1] + v[2];   // 18
//	if (sum - make >= 0) {
//		dt = (sum - make);
//	}// 3 
//	for (int i = 0; i < n - 2; i++) {
//		for (int j = i + 1; j < n - 1; j++) {
//			for (int k = j + 1; k < n; k++) {
//				make = v[i] + v[j] + v[k];
//				if (dt == 0) {
//					break;
//				}
//				if (sum - make >= 0) {
//					if ((sum - make) <= dt) {
//						dt = (sum - make);
//
//						// i = 0; j = 1; k = 3
//						// make = 19
//						// dt는 기존에 3
//						// sum - make = 2
//
//					}
//				}
//			}
//		}
//	}
//
//	cout << sum - dt;
//
//
//
//
//
//
//
//
//
//	return 0;
//}