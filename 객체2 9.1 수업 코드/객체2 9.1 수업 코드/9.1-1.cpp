//#include<iostream>
//
//using namespace std;
//
//int main() {
//	const int a = 5;
//	int score = 0;
//	cout << "점수를 입력:";
//	cin >> score;
//	
//	switch (score/10) {
//	case 9:
//	case 8:
//		cout << "Pass";
//		break;
//	case 7:
//		cout << "Pass";
//		break;
//	case 6:
//		cout << "Pass";
//		break;
//	case a:
//		cout << "Pass";
//		break;
//		
//	default: cout << "Fail";
//	}
//
//	return 0;
//}

#include <iostream>
#include<array>
using namespace std;

int main() {
	int items[5] = { 1, 2, 3, 4, 5 };


	for (int& item : items) {
		item + 1;

	}
	
	for (int i = 0; i <= 4; i++) {
		cout << items[i] << " ";
	}

	return 0;
}