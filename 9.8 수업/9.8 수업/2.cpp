//���� �ڵ� (+, -, /, X)

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
//		cout << "ù ��° ��:";
//		cin >> n;
//		num1 = n;
//	}
//	double Getnum1() {
//		return num1;
//	}
//
//	void Setnum2(double n) {
//		cout << "�� ��° ��:";
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
//			cout << "�޴� ���� (1. ���ϱ�, 2. ����, 3. ������, 4. ���ϱ�) :";
//			cin >> choice;
//			if ((1 > choice) || (choice > 4)) {
//				cout << "�߸� �����ϼ̽��ϴ�."<<endl;
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