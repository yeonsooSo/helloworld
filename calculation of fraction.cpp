#include <iostream>
using namespace std;

int gcd(int num1, int num2); // 최대공약수를 반환하는 함수 gcd의 프로토타입

int main() {

	int num1{ 0 };
	int den1{ 0 };
	int num2{ 0 };
	int den2{ 0 };

	int num3{ 0 };  // 더한 결과의 분자
	int den3{ 0 };	// 더한 결과의 분모


	cout << "첫 번째 분수의 분자를 입력하세요: ";
	cin >> num1;
	cout << "첫 번째 분수의 분모를 입력하세요: ";
	cin >> den1;

	cout << "두 번째 분수의 분자를 입력하세요: ";
	cin >> num2;
	cout << "두 번째 분수의 분모를 입력하세요: ";
	cin >> den2;


	if (den1 != 0 && den2 != 0) {	// 두 분모 모두에 0이 오지 않는 경우에만 출력
		cout << "\n첫 번째 분수입니다: " << num1 << '/' << den1 << endl;
		cout << "두 번째 분수입니다: " << num2 << '/' << den2 << endl;

		num3 = num1 * den2 + num2 * den1;   // 두 분수의 합의 분자 계산
		den3 = den1 * den2;					// 두 분수의 합의 분모 계산


		cout << "\n두 분수의 합: " << num3 / gcd(num3, den3) << '/' << den3 / gcd(num3, den3);
		// 더한 결과의 분자, 분모를 각각 최대공약수로 나누어 기약분수로 출력한다.
	}

	else {	// 분모에 0이 오는 경우
		cout << "\n분모에 0이 올 수 없습니다." << endl;
	}
}

//gcd 함수 정의

int gcd(int num1, int num2) {

	int a{ 0 };

	if (num1 < num2) {
		a = num1;
		num1 = num2;
		num2 = a;
	} // num1 >= num2 가 아닌 경우 자리 바꾸기

	if (num1 % num2 == 0) {
		return num2;	//num1이 num2로 나누어 떨어지는 경우 num2가 최대공약수, num2 반환하고 재귀함수 벗어남
	}
	else {
		return gcd(num2, num1 % num2);
	}
	//num1이 num2로 나누어 떨어질 때까지 반복하기
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

//반복문으로 구현

//int gcd(int num1, int num2) {
//	int a{ 0 };  //자리 바꾸기 용 변수
//	int b{ 0 };  //최대공약수를 구하기 위한 변수
//
//	if (num1 < num2) {
//		a = num1;
//		num1 = num2;
//		num2 = a;
//	} // num1 >= num2 가 아닌 경우 자리 바꾸기
//
//	while (num2 != 0) { //num2가 0이 될 때까지 반복
//		b = num1 % num2;
//		num1 = num2;
//		num2 = b;
//	}
//	// num2가 0인 경우 반복 중지, num1가 최대공약수로 반환
//	return num1;
//}


