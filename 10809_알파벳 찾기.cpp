//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//
//	string input; cin >> input;
//
//	int array[26];
//
//	for (int i = 0; i < 26; i++) {
//		array[i] = -1;
//	}
//
//	int index = -1;
//
//	for (int i = 0; i < input.length(); i++) {
//		index = (static_cast<int>(input[i]) - 97);
//
//		if (array[index] == -1) {
//			array[index] = i;
//		}
//	}
//
//
//
//
//	for (int i = 0; i < 26; i++) {
//		cout << array[i] << " ";
//	}
//
//
//	return 0;
//}