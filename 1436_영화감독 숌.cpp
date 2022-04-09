//#include <iostream>
//#include <string>
//using namespace std;
//
//
//// 종말의 숫자 : 어떤 수에 6이 적어도 3개이상 연속으로 들어가는 수
//// string class 의 to_string : to_문자열
//// 아스키코드 6과 char type '6'을 헷갈리면 안된다.
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