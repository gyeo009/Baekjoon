//#include <iostream>
//
//using namespace std;
//
//// �Ѽ�������
//bool is_hansoo(int n) {
//	// 1. ���� �� �ڸ����� ������.
//	// 2. ���� 1�ڸ��ۿ����ٸ� true
//	// 2-1. ���� 2�ڸ��ۿ���� true
//	// 3. 3�ڸ� �̻��� �� ����,
//	// 4. ù ��° - �� ��° ���� ������� ���� ��
//	//    �� ��° - �� ��° ���� ������ ���ٸ� ture
//	// �Ϲ�ȭ�ؼ�
//	// i ��° - i+1 ��° ���� ������� ���� ��
//	// �� �ڸ������� �� �� ���̰� ������ ������ �Ѽ��̴�.
//	int reminder = 0;
//	int q = n;
//	int count = 0; // �ڸ���
//	while (q > 0) {
//		q = q / 10;
//		count++;
//	}
//	//���ڸ������� �� true
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