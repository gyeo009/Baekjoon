//#include <iostream>
//
//using std::cout;
//using std::cin;
//
//int main() {
//	std::ios_base::sync_with_stdio(false); cin.tie(NULL);
//
//	int N; cin >> N;
//
//	int sam = 0, oh = 0;
//
//
//	int index = 0;
//
//	int* besort = new int[10000]();
//
//	
//
//	//N = 3 * sam + 5 * oh;
//
//	if (N % 5 == 0){
//		oh = N / 5; besort[index] = oh; index++;
//	}
//	else if (N % 3 == 0){
//		sam = N / 3; besort[index] = sam; index++;
//	}
//
//	for (int i = 0; i < 1670; i++) {
//		for (int j = 0; j < 1000; j++) {
//			if (N == 3 * i + 5 * j) {
//				sam = j;
//				oh = i;
//				besort[index] = i+j;
//				index++;
//			}
//		}
//	}
//	if (sam == 0 && oh == 0) {
//		cout << -1 << '\n';
//		delete[] besort;
//		return 0;
//	}
//
//	int min = besort[0];
//	for (int i = 1; i < index; i++) {
//		if (min > besort[i])
//			min = besort[i];
//	}
//	cout << min;
//
//	delete[] besort;
//	return 0;
//}
