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
//	// check �� 2�����迭�� ����� [][]��ҿ� ����� �ִ´�
//	// check = [ {i, j, k}, {i2, j2, k2}, .... ]
//	// i���� �����Կ� Ű�� ������� ���� ����,
//	// j���� �ε��� ��ȣ�� ����,
//	// k���� �����Կ� Ű�� ������� ������ ����
//
//	for (int i = 0; i < n; i++) {
//		// {������, Ű}
//		array[i] = new int[2]();
//		container[i] = new int[2]();
//		check[i] = new int[3]();
//	}
//
//	// container���� �� ����� �ڱ⺸�� ū Ű�� ü���� ���� ����� �󸶳�
//	// �ִ����� ����Ǿ� ����.
//
//	for (int i = 0; i < n; i++) {
//		cin >> array[i][0] >> array[i][1];
//	}
//
//	// ������,,,, �ڱ⺸�� ū ����� �󸶳� �ִ���
//	// ���ÿ� Ű�� ����
//
//
//
//	int count1 = 0; // ������
//	int count2 = 0; // Ű
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
//	// for�� �ٵ��� count�� container[0][0]�� �Ҵ�
//	// Ȯ�ο� �ڵ忴��
//	/*for (int i = 0; i < n; i++) {
//		cout << container[i][0] << "  " << container[i][1] << endl;
//	}*/
//
//	// �� ����� ���� �� ������� ����� ���ϸ� �ɵ�!
//	for (int i = 0; i < n; i++) {
//		check[i][1] = i; // �ε��� ��ȣ ����
//		check[i][0] = container[i][0] + container[i][1];
//	}
//
//	//// check ����
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
//	//		// ���Ͽ� ��ġ ��ȯ�� �� ���ҿ� �� �������ҵ��� ũ�� ��
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
//	// check�� ����ű��
//	// check�� 3ĭ���� ����� ��..
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
//	//// �̷��� �ٽ� check�� check[][1]�� �������� �ٽ� ����
//	//// �ϸ鼭 check[][2]�� ���� ����, check[][0]�� �������ʿ����
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
//	//		// ���Ͽ� ��ġ ��ȯ�� �� ���ҿ� �� �������ҵ��� ũ�� ��
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