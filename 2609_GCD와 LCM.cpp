//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	// �ּҰ������ �� �ڿ����� ����� ��� �� ���� ���� ���� �ǹ��Ѵ�.
//	// �ּҰ���� = �� �ڿ����� �� / �ִ�����
//
//	// �ִ������� �� �ڿ����� ����� ��� �� ���� ū ����� �ǹ��Ѵ�.
//	// ��Ŭ���� ȣ����
//	// �ִ������� ���ϴ� �˰��� O(logN)
//	// B�� �׻� A % B���� ũ��
//	// GCD(A, B) = GCD(B, A % B)
//
//	// if A % B = 0 -> GCD = B
//	// else GCD(B, A % B)
//
//	int n1, n2; cin >> n1 >> n2;
//
//	// �������� ����
//	if (n1 < n2) {
//		int tmp = n1;
//		n1 = n2;
//		n2 = tmp;
//	}
//
//	// �ִ�����
//	int gcd1 = n1;
//	int gcd2 = n2;
//	int temp = 0;
//	while (gcd1 % gcd2 != 0) {
//		temp = gcd2;
//		gcd2 = gcd1 % gcd2;
//		gcd1 = temp;
//	}
//	cout << gcd2 << '\n';
//
//	// �ּҰ����
//	int lcm = n1 * n2 / gcd2;
//	cout << lcm << '\n';
//
//
//
//
//
//	return 0;
//}