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
//	// ������ �迭����
//	int* array = new int[n];
//	for (int i = 0; i < n; i++) {
//		cin >> array[i];
//	}
//
//	// ���� �˰���
//	int temp = 0;
//	for (int i = 0; i < n-1; i++) {
//		
//		// �� ���ҿ� �� ���� ���� ��
//		if (array[i] > array[i + 1]) {
//			temp = array[i];
//			array[i] = array[i + 1];
//			array[i + 1] = temp;
//			if (i == 0) continue;
//			
//			// ���Ͽ� ��ġ ��ȯ�� �� ���ҿ� �� �������ҵ��� ũ�� ��
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
//	// ���
//	for (int i = 0; i < n; i++) {
//		cout << array[i] << '\n';
//	}
//
//
//	delete[] array;
//	return 0;
//}