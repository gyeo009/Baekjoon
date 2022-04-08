//#include <iostream>
//#include <string>
//
//using namespace std;
//
//
//int main() {
//	// 1. 받은 문자열을 전부다 대문자로 바꾼다
//	// 2. [0] 부터 시작해서 문자의 수를 한 컨테이너에 계속 유지한다
//	// 3. 가장 많이 나온 알파벳을 출력한다
//	// 3-1. 여러 개면 ?를 출력한다
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