//#include <iostream>
//
//using std::cout;
//using std::cin;
//
//// 중복된거 제거
//
//
//int main() {
//	std::ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	char* p = new char[101]();
//	cin >> p;
//
//	int counter = 0;
//	for (int i = 0; i < 100; i++) {
//		if (p[i] == 'l') {
//			if (i == 99) {
//				counter++;
//				continue;
//			}
//
//			if (p[i + 1] == 'j') {
//				counter++;
//				i++;
//			}
//			else {
//				if (p[i] == 0) {
//					continue;
//				}
//				counter++;
//			}
//		}
//		else if (p[i] == 'c') {
//			if (i == 99) {
//				counter++;
//				continue;
//			}
//
//			if (p[i + 1] == '=') {
//				counter++;
//				i++;
//			}
//			else if (p[i + 1] == '-') {
//				counter++;
//				i++;
//			}
//			else {
//				if (p[i] == 0) {
//					continue;
//				}
//				counter++;
//			}
//		}
//		else if (p[i] == 'd') {
//			if (i == 99) {
//				counter++;
//				continue;
//			}
//
//			if (p[i + 1] == '-') {
//				counter++;
//				i++;
//			}
//			else if ((p[i + 1] == 'z') && (p[i + 2] == '=')) {
//				if (i == 98) continue;
//				counter++;
//				i += 2;
//			}
//			else {
//				if (p[i] == 0) {
//					continue;
//				}
//				counter++;
//			}
//		}
//		else if (p[i] == 'n') {
//			if (i == 99) {
//				counter++;
//				continue;
//			}
//
//			if (p[i + 1] == 'j') {
//				counter++;
//				i++;
//			}
//			else {
//				if (p[i] == 0) {
//					continue;
//				}
//				counter++;
//			}
//		}
//		else if (p[i] == 's') {
//			if (i == 99) {
//				counter++;
//				continue;
//			}
//
//			if (p[i + 1] == '=') {
//				counter++;
//				i++;
//			}
//			else {
//				if (p[i] == 0) {
//					continue;
//				}
//				counter++;
//			}
//		}
//		else if (p[i] == 'z') {
//			if (i == 99) {
//				counter++;
//				continue;
//			}
//			if (p[i + 1] == '=') {
//				counter++;
//				i++;
//			}
//			else {
//				if (p[i] == 0) {
//					continue;
//				}
//				counter++;
//			}
//		}
//		else {
//			if (p[i] == 0) {
//				break;
//			}
//			counter++;
//		}
//	}
//
//	cout << counter;
//
//	delete[] p;
//	return 0;
//}
