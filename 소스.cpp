#include <iostream>
using namespace std;

int gcd(int num1, int num2); // �ִ������� ��ȯ�ϴ� �Լ� gcd�� ������Ÿ��

int main() {

	int num1{ 0 };
	int den1{ 0 };
	int num2{ 0 };
	int den2{ 0 };

	int num3{ 0 };  // ���� ����� ����
	int den3{ 0 };	// ���� ����� �и�


	cout << "ù ��° �м��� ���ڸ� �Է��ϼ���: ";
	cin >> num1;
	cout << "ù ��° �м��� �и� �Է��ϼ���: ";
	cin >> den1;

	cout << "�� ��° �м��� ���ڸ� �Է��ϼ���: ";
	cin >> num2;
	cout << "�� ��° �м��� �и� �Է��ϼ���: ";
	cin >> den2;


	if (den1 != 0 && den2 != 0) {	// �� �и� ��ο� 0�� ���� �ʴ� ��쿡�� ���
		cout << "\nù ��° �м��Դϴ�: " << num1 << '/' << den1 << endl;
		cout << "�� ��° �м��Դϴ�: " << num2 << '/' << den2 << endl;

		num3 = num1 * den2 + num2 * den1;   // �� �м��� ���� ���� ���
		den3 = den1 * den2;					// �� �м��� ���� �и� ���


		cout << "\n�� �м��� ��: " << num3 / gcd(num3, den3) << '/' << den3 / gcd(num3, den3);
		// ���� ����� ����, �и� ���� �ִ������� ������ ���м��� ����Ѵ�.
	}

	else {	// �и� 0�� ���� ���
		cout << "\n�и� 0�� �� �� �����ϴ�." << endl;
	}
}

//gcd �Լ� ����

int gcd(int num1, int num2) {

	int a{ 0 };

	if (num1 < num2) {
		a = num1;
		num1 = num2;
		num2 = a;
	} // num1 >= num2 �� �ƴ� ��� �ڸ� �ٲٱ�

	if (num1 % num2 == 0) {
		return num2;	//num1�� num2�� ������ �������� ��� num2�� �ִ�����, num2 ��ȯ�ϰ� ����Լ� ���
	}
	else {
		return gcd(num2, num1 % num2);
	}
	//num1�� num2�� ������ ������ ������ �ݺ��ϱ�
}


//int gcd(int num1, int num2) {
//
//	if (num1 % num2 == 0) {
//		return num2;
//	}
//	else {
//		return gcd(num2, num1 % num2);
//	}
//}

//�ݺ������� ����

//int gcd(int num1, int num2) {
//	int a{ 0 };  //�ڸ� �ٲٱ� �� ����
//	int b{ 0 };  //�ִ������� ���ϱ� ���� ����
//
//	if (num1 < num2) {
//		a = num1;
//		num1 = num2;
//		num2 = a;
//	} // num1 >= num2 �� �ƴ� ��� �ڸ� �ٲٱ�
//
//	while (num2 != 0) { //num2�� 0�� �� ������ �ݺ�
//		b = num1 % num2;
//		num1 = num2;
//		num2 = b;
//	}
//	// num2�� 0�� ��� �ݺ� ����, num1�� �ִ������� ��ȯ
//	return num1;
//}


