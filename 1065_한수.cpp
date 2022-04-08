//#include <iostream>
//
//using namespace std;
//
//// 한수판정기
//bool is_hansoo(int n) {
//	// 1. 수의 각 자리수를 나눈다.
//	// 2. 수가 1자리밖에없다면 true
//	// 2-1. 수가 2자리밖에없어도 true
//	// 3. 3자리 이상의 수 부터,
//	// 4. 첫 번째 - 두 번째 값을 등차라고 했을 때
//	//    두 번째 - 세 번째 값도 등차와 같다면 ture
//	// 일반화해서
//	// i 번째 - i+1 번째 값을 등차라고 했을 때
//	// 각 자리수까지 다 그 차이가 등차와 같으면 한수이다.
//	int reminder = 0;
//	int q = n;
//	int count = 0; // 자리수
//	while (q > 0) {
//		q = q / 10;
//		count++;
//	}
//	//두자리수까지 걍 true
//	if (count <= 2) {
//		return true;
//	}
//	else {
//		int* array = new int[count];
//		for (int i = 0; i < count; i++) {
//			array[i] = n % 10;
//			n = n / 10;
//		}
//
//		int interval = array[0] - array[1];
//		for (int i = 1; i < count-1; i++) {
//			if (array[i] - array[i + 1] != interval) {
//				delete[] array;
//				return false;
//			}
//		}
//		delete[] array;
//	}
//	return true;
//}
//
//
//
//int main() {
//	int n; cin >> n;
//
//	int count = 0;
//	for (int i = 1; i <= n; i++) {
//		if (is_hansoo(i) == true) {
//			count++;
//		}
//	}
//	cout << count;
//
//
//
//	return 0;
//}