//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//	// 1. ���� ���ڿ��� ���δ� �빮�ڷ� �ٲ۴�
//	// 2. [0] ���� �����ؼ� ������ ���� �� �����̳ʿ� ��� �����Ѵ�
//	// 3. ���� ���� ���� ���ĺ��� ����Ѵ�
//	// 3-1. ���� ���� ?�� ����Ѵ�
//
//	string input; getline(cin, input);
//	int cont[26];
//	for (int i = 0; i < 26; i++) {
//		cont[i] = 0;
//	}
//	int index = -1;
//	for (int i = 0; i < input.length(); i++) {
//		if (input[i] >= 97) {
//			input[i] = input[i] - 32;
//		}
//		index = input[i] - 65;
//		cont[index] += 1;
//	}
//	int max = -1;
//	for (int i = 0; i < 26; i++) {
//		if (cont[i] > max) { max = cont[i]; }
//	}
//
//	int count = 0;
//	for (int i = 0; i < 26; i++) {
//		if (cont[i] == max) {
//			count++;
//			index = i;
//		}
//	}
//	if (count == 1) {
//		cout << static_cast<char>(index+65);
//	}
//	else if (count > 1) {
//		cout << '?';
//	}
//
//
//
//	return 0;
//}