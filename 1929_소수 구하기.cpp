//#include <iostream>
//
//using namespace std;
//
//
//// �� ���� �ð��� �˰���
//// https://300-29-1.tistory.com/8
//int main() {
//	ios_base::sync_with_stdio(false); cout.tie(NULL);
//	int M, N; cin >> M >> N;
//	int* a = new int[N]();
//
//	for (int i = 1; i <= N; i++) {
//		a[i - 1] = i;
//	}
//	a[0] = 0;
//	// i�� ���� ������ �� sqrt�� ������ ��ȣ�� ������ �ٿ���� ��
//	for (int i = 2; i*i <= N; i++) {
//		for (int j = M-1; j < N; j++) {
//			if (a[j] == 0) {
//				continue;
//			}
//			if (a[j] % i == 0 && a[j] != i) {
//				a[j] = 0;
//			}
//		}
//	}
//
//	for (int i = M-1; i < N; i++) {
//		if (a[i] != 0) { cout << a[i] << '\n'; }
//	}
//
//
//	delete[] a;
//	return 0;
//}
