//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//
//	double a = 3.45678;
//	double b = 3.4123;
//	cout << setfill('*');
//	cout <<left<< setw(14) << a<<" "<<right << setw(7) << b;
//
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main() {
//
//
//	return 0;
//}

//uniform initialization 

//#include<iostream>
//using namespace std;
//
//class Tmp {
//private:
//
//public:
//	Tmp() { cout << "�⺻ ������ ȣ��"; }
//
//	Tmp(int a, int b) {
//		cout << "���� ������ ȣ��";
//	}
//};
//
//
//int main() {
//	int a = 5;   //���� �ʱ�ȭ
//	int b(5);    //���� �ʱ�ȭ
//	int c{ 5 };  //uniform �ʱ�ȭ
//
//	//������
//	//int d = 4.5;   �������� 4�� ����(�Ͻ��� ����ȯ)
//	//int e{4.5}; ������ ������ ���
//
//	/*Tmp t1();  Tmp�� �����ϰ� ���ڸ� ���� �ʴ� �Լ� t1���� �ν��Ѵ�. (��ü t1 x)
//	*             
//	Tmp t2{};*/   //Ŭ������ �ʱ�ȭ�� ���� ������ uniform �������� �ʱ�ȭ �ϴ°� ����.  
//
//	Tmp t1{};
//
//
//	return 0;
//}

//stream :�ӽ��������, ������ buffer

//#include<iostream>
//#include<sstream>   //ostringstream ��ü ����ϱ����ؼ�
//using namespace std;
//
//int main() {
//
//	ostringstream output;
//	output << "���";  //output ��ü ���ο� ����Ѵ�
//
//
//	return 0;
//}

//�⺻ type (int, double, char ...)���� �Լ��� �����Ҷ� pass by value ��� �ᵵ �ȴ�
//Ŭ���� type ��ü�� �Լ��� ������ ���� ������ �����ϴ°� ����.
//ex) Time Ŭ������ ��ü�� ����� �� �޴� �κп� Time& time


// �Լ��� ������ �� const Ȱ���
//const�� �� ������ �Լ��� ������ �� lvalue�� ������ �� �ִ�. rvalue�� ���� ����
//const�� ������ �Լ��� ������ �� lvalue, rvalue �� ���� ����(��, const�� ���� ��ü�� ������ �������� ������ �� ����.)
//lvalue: ���� ����
//rvalue: �ӽð�



//try{

  /* throw         //���ܰ� �ִ��� üũ�ϴ� ��, ���ܰ� �߻��ϸ� throw ����
  *                //throw�� ���� ��ü�� ����� catch ������ ������

}


  catch{            

                   //���ܿ� ���� ó���� �Ѵ�, catch�� ������ ���� �߻�

}*/


//#include<iostream>
//using namespace std;
//
//int main() {
//
//    try {
//        for (int i = 0; i < 5; i++) {
//            if (i == 3) {
//                throw i;
//                
//            }
//            
//        }
//    }
//    catch (int a) {
//        cout << a << "��/�� ������.";
//    }
//
//   
//
//    return 0;
//}
