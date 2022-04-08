//#include<iostream>
//#include<string>
//
//
//using namespace std;
//
//int main(){
//    // 공백을 포함한 문자열 받기
//    // getline에 대한 이해,
//    // 문제 조건에 대한 이해
//    string str; getline(cin, str); int count = 0;
//
//    bool space = false;
//    if (str.empty()) {
//        cout << 0;
//        return 0;
//    }
//    count = 1;
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == ' ')
//            count++;
//    }
//
//    if (str[0] == ' ')
//        count--;
//    if (str[str.length() - 1] == ' ')
//        count--;
//    cout << count;
//    return 0;
//}