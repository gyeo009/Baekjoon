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
//	// �����ع���
//	int temp = 0;
//	for (int i = 0; i < n - 1; i++) {
//
//		// �� ���ҿ� �� ���� ���� ��
//		if (p[i] > p[i + 1]) {
//			temp = p[i];
//			p[i] = p[i + 1];
//			p[i + 1] = temp;
//			if (i == 0) continue;
//
//			// ���Ͽ� ��ġ ��ȯ�� �� ���ҿ� �� �������ҵ��� ũ�� ��
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