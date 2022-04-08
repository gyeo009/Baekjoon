//#include <iostream>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n; cin >> n;
//	
//	// 저장할 배열생성
//	int* array = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> array[i];
//	}
//
//	// 정렬 알고리즘
//	int temp = 0;
//	for (int i = 0; i < n-1; i++) {
//		
//		// 한 원소와 그 다음 원소 비교
//		if (array[i] > array[i + 1]) {
//			temp = array[i];
//			array[i] = array[i + 1];
//			array[i + 1] = temp;
//			if (i == 0) continue;
//			
//			// 비교하여 위치 변환시 그 원소와 그 이전원소들의 크기 비교
//			for (int j = i; j > 0; j--) {
//				if (array[j - 1] > array[j]) {
//					temp = array[j];
//					array[j] = array[j - 1];
//					array[j - 1] = temp;
//				}
//			}
//		}
//	}
//
//	// 출력
//	for (int i = 0; i < n; i++) {
//		cout << array[i] << '\n';
//	}
//
//
//	delete[] array;
//	return 0;
//}