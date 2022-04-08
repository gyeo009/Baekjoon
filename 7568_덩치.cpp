//#include <iostream>
//
//
//using namespace std;
//
//int main() {
//	int n; cin >> n;
//	int** array = new int* [n]();
//	int** container = new int* [n]();
//	int** check = new int* [n]();
//
//	// check 도 2차원배열로 만들고 [][]요소엔 등수를 넣는다
//	// check = [ {i, j, k}, {i2, j2, k2}, .... ]
//	// i에는 몸무게와 키의 등수값의 합이 저장,
//	// j에는 인덱스 번호가 저장,
//	// k에는 몸무게와 키의 등수값의 순서가 저장
//
//	for (int i = 0; i < n; i++) {
//		// {몸무게, 키}
//		array[i] = new int[2]();
//		container[i] = new int[2]();
//		check[i] = new int[3]();
//	}
//
//	// container에는 각 사람별 자기보다 큰 키나 체중을 가진 사람이 얼마나
//	// 있는지가 저장되어 있음.
//
//	for (int i = 0; i < n; i++) {
//		cin >> array[i][0] >> array[i][1];
//	}
//
//	// 몸무게,,,, 자기보다 큰 사람이 얼마나 있는지
//	// 동시에 키도 저장
//
//
//
//	int count1 = 0; // 몸무게
//	int count2 = 0; // 키
//	for (int j = 0; j < n; j++) {
//		count1 = 0;
//		count2 = 0;
//		for (int i = 0; i < n; i++) {
//			if (j == i) {
//				continue;
//			}
//			if (array[j][0] < array[i][0]) {
//				count1++;
//			}
//			else if (array[j][0] == array[i][0]) {
//				continue;
//			}
//			if (array[j][1] < array[i][1]) {
//				count2++;
//			}
//			else if (array[j][1] == array[i][1]) {
//				continue;
//			}
//		}
//		container[j][0] = count1;
//		container[j][1] = count2;
//	}
//
//	// for문 다돌면 count를 container[0][0]에 할당
//	// 확인용 코드였음
//	/*for (int i = 0; i < n; i++) {
//		cout << container[i][0] << "  " << container[i][1] << endl;
//	}*/
//
//	// 각 등수를 더한 값 순서대로 등수를 정하면 될듯!
//	for (int i = 0; i < n; i++) {
//		check[i][1] = i; // 인덱스 번호 삽입
//		check[i][0] = container[i][0] + container[i][1];
//	}
//
//	//// check 정렬
//	//int temp = 0;
//	//for (int i = 0; i < n - 1; i++) {
//	//	if (check[i][0] > check[i + 1][0]) {
//	//		temp = check[i][0];
//	//		check[i][0] = check[i + 1][0];
//	//		check[i + 1][0] = temp;
//
//	//		temp = check[i][1];
//	//		check[i][1] = check[i + 1][1];
//	//		check[i + 1][1] = temp;
//
//	//		if (i == 0) continue;
//
//	//		// 비교하여 위치 변환시 그 원소와 그 이전원소들의 크기 비교
//	//		for (int j = i; j > 0; j--) {
//	//			if (check[j - 1][0] > check[j][0]) {
//	//				temp = check[j][0];
//	//				check[j][0] = check[j - 1][0];
//	//				check[j - 1][0] = temp;
//
//
//	//				temp = check[j][1];
//	//				check[j][1] = check[j - 1][1];
//	//				check[j - 1][1] = temp;
//	//			}
//	//		}
//	//	}
//	//}
//
//
//	// check로 등수매기기
//	// check는 3칸으로 만들어 둠..
//
//	int count = 1;
//	for (int i = 0; i < n; i++) {
//		count = 1;
//		for (int j = 0; j < n; j++) {
//			if (i == j) {
//				continue;
//			}
//			if (check[i][0] > check[j][0]) {
//				count++;
//			}
//		}
//		check[i][2] = count;
//	}
//
//	//// 이러고 다시 check를 check[][1]을 기준으로 다시 정렬
//	//// 하면서 check[][2]도 따라서 정렬, check[][0]은 정렬할필요없음
//	//temp = 0;
//	//for (int i = 0; i < n - 1; i++) {
//	//	if (check[i][1] > check[i + 1][1]) {
//	//		temp = check[i][1];
//	//		check[i][1] = check[i + 1][1];
//	//		check[i + 1][1] = temp;
//	//		temp = check[i][2];
//	//		check[i][2] = check[i + 1][2];
//	//		check[i + 1][2] = temp;
//	//		if (i == 0) continue;
//
//	//		// 비교하여 위치 변환시 그 원소와 그 이전원소들의 크기 비교
//	//		for (int j = i; j > 0; j--) {
//	//			if (check[j - 1][1] > check[j][1]) {
//	//				temp = check[j][1];
//	//				check[j][1] = check[j - 1][1];
//	//				check[j - 1][1] = temp;
//	//				temp = check[j][2];
//	//				check[j][2] = check[j - 1][2];
//	//				check[j - 1][2] = temp;
//	//			}
//	//		}
//	//	}
//	//}
//
//	for (int i = 0; i < n; i++) {
//		cout << check[i][2] << ' ';
//	}
//
//
//
//
//	for (int i = 0; i < n; i++) {
//		delete[] array[i];
//		delete[] container[i];
//		delete[] check[i];
//	}
//	delete[] array;
//	delete[] container;
//	delete[] check;
//
//	return 0;
//}