//#include <iostream>
//#include <string>
//using namespace std;
//
//
//// ������ ���� : � ���� 6�� ��� 3���̻� �������� ���� ��
//// string class �� to_string : to_���ڿ�
//// �ƽ�Ű�ڵ� 6�� char type '6'�� �򰥸��� �ȵȴ�.
//int main() {
//	int N; cin >> N;
//	string input;
//	bool deter = false;
//	int hellcount = 0;
//	for (int i = 666; true; i++) {
//		input = to_string(i);
//		int counter = 0;
//		for (int j = 0; j < input.length(); j++) {
//			if (input[j] == '6') {
//				counter++;
//			}
//			else {
//				counter = 0;
//			}
//
//			if (counter >= 3) {
//				deter = true;
//				break;
//			}
//			else {
//				deter = false;
//			}
//		}
//		if (deter == true) {
//			hellcount++;
//		}
//		if (N == hellcount) {
//			cout << i;
//			return 0;
//		}
//
//
//	}
//
//
//
//	return 0;
//}