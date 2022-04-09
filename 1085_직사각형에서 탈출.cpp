//#include <iostream>
//
//using namespace std;
//
//int main() {
//	int x, y, w, h; cin >> x >> y >> w >> h;
//
//	int array[4];
//
//	array[0] = x;
//	array[1] = w-x;
//	array[2] = y;
//	array[3] = h-y;
//
//	if(array[0] <= array[1] && array[0] <= array[2] && array[0] <= array[3]){
//		cout << array[0];
//		return 0;
//	}
//	if (array[1] <= array[0] && array[1] <= array[2] && array[1] <= array[3]) {
//		cout << array[1];
//		return 0;
//	}
//	if (array[2] <= array[1] && array[2] <= array[0] && array[2] <= array[3]) {
//		cout << array[2];
//		return 0;
//	}
//	if (array[3] <= array[1] && array[3] <= array[2] && array[3] <= array[0]) {
//		cout << array[3];
//		return 0;
//	}
//
//	return 0;
//}