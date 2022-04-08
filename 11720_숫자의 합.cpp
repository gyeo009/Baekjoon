//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//	// overflow 때문인거같음
//	int tc; cin >> tc;
//
//	char* con = new char[tc];
//	for (int i = 0; i < tc; i++) {
//		cin >> con[i];
//	}
//
//	int sum = 0;
//	for (int i = 0; i < tc; i++) {
//		sum += con[i]-'0';
//	}
//	cout << sum;
//	delete[] con;
//
//
//	return 0;
//}