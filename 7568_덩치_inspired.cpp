//#include <iostream>
//
//
//using namespace std;
//// 등수구하기 알고리즘
//// 그냥 하나당 전체에 대해 큰 사람이 얼마나 있는지 확인만 하자!!
//
//
//
//int main() {
//	int n; cin >> n;
//	int** array = new int* [n]();
//	int** check = new int* [n]();
//
//	for (int i = 0; i < n; i++) {
//		array[i] = new int[2]();
//		check[i] = new int[2]();
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> array[i][0] >> array[i][1];
//	}
//
//	int count = 1;
//	for (int i = 0; i < n; i++) {
//		count = 1;
//		for (int j = 0; j < n; j++) {
//			
//			if ((array[i][0] < array[j][0]) && (array[i][1] < array[j][1])) {
//				count++;
//			}
//		}
//		check[i][1] = count;
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << check[i][1] << ' ';
//	}
//
//
//
//
//
//	for (int i = 0; i < n; i++) {
//		delete[] array[i];
//		delete[] check[i];
//	}
//	delete[] array;
//	delete[] check;
//	return 0;
//}