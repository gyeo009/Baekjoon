//#include <iostream>
//#include <vector>
//#include <limits.h>
//
//using namespace std;
//
//
//// 분해합 구하기 함수
//int div_sum(int input) {
//	int result = input;
//	int reminder = 0;
//	while (input != 0) {
//		reminder = input % 10;
//		input = input / 10;
//		result += reminder;
//	}
//	return result;
//}
//
//
//int main() {
//	int n; cin >> n;
//	vector<int> v(1);
//	bool deter = false;
//
//	int count = 0;
//	for (int i = 0; i<=1000000; i++) {
//		if (n == div_sum(i)) {
//			v.emplace_back(i);
//			count++;
//			deter = true;
//		}
//	}
//	if (deter == false) {
//		cout << 0;
//		return 0;
//	}
//
//	int min = INT_MAX;
//	while (count != 0) {
//		if (min > v.back()) {
//			min = v.back();`
//			v.pop_back();
//			count--;
//		}
//	}
//
//	cout << min;
//
//
//
//
//	return 0;
//}