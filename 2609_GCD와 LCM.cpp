//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//	// 최소공배수는 두 자연수의 공통된 배수 중 가장 작은 수를 의미한다.
//	// 최소공배수 = 두 자연수의 곱 / 최대공약수
//
//	// 최대공약수는 두 자연수의 공통된 약수 중 가장 큰 약수를 의미한다.
//	// 유클리드 호제법
//	// 최대공약수를 구하는 알고리즘 O(logN)
//	// B는 항상 A % B보다 크다
//	// GCD(A, B) = GCD(B, A % B)
//
//	// if A % B = 0 -> GCD = B
//	// else GCD(B, A % B)
//
//	int n1, n2; cin >> n1 >> n2;
//
//	// 내림차순 정렬
//	if (n1 < n2) {
//		int tmp = n1;
//		n1 = n2;
//		n2 = tmp;
//	}
//
//	// 최대공약수
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
//	// 최소공배수
//	int lcm = n1 * n2 / gcd2;
//	cout << lcm << '\n';
//
//
//
//
//
//	return 0;
//}