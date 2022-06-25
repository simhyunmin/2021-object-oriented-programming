//계산기 코드 (+, -, /, X)

//#include <iostream>
//using namespace std;
//
//class Calculator {
//
//private:
//
//public:
//	int choice = 0;
//	double num1 = 0;
//	double num2 = 0;
//	Calculator() {
//		Interface();
//		Calculation();
//	}
//	void Setchoice(int n) {
//		choice = n;
//	}
//	int Getchoice() {
//		return choice;
//	}
//
//	void Setnum1(double n) {
//		cout << "첫 번째 수:";
//		cin >> n;
//		num1 = n;
//	}
//	double Getnum1() {
//		return num1;
//	}
//
//	void Setnum2(double n) {
//		cout << "두 번째 수:";
//		cin >> n;
//		num2 = n;
//	}
//	double Getnum2() {
//		return num2;
//	}
//
//	void Interface() {
//		int a = 0;
//		do {
//			cout << "메뉴 선택 (1. 더하기, 2. 빼기, 3. 나누기, 4. 곱하기) :";
//			cin >> choice;
//			if ((1 > choice) || (choice > 4)) {
//				cout << "잘못 선택하셨습니다."<<endl;
//			}
//		} while ((1 > choice) || (choice > 4));
//		Setnum1(a);
//		Setnum2(a);
//		
//
//	}
//
//	void Calculation() {
//		switch (choice) {
//		case 1: cout << num1 + num2;
//			break;
//		case 2: cout << num1 - num2;
//			break;
//		case 3: cout << num1 / num2;
//			break;
//		case 4: cout << num1 * num2;
//			break;
//		}
//	}
//
//
//};
//
//int main() {
//
//	Calculator C1;
//
//	return 0;
//}