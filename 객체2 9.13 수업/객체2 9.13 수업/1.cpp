//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//	
//
//public:
//	int a = 0;
//	Test(int b) { 
//	a = b;
//	cout << "�⺻������" << a << " ����" << endl; };    //��������� ������ �����ڰ� �����ϱ� ������ �����Ϸ��� �Ͻ������� �⺻ �����ڸ� ���� ���Ѵ�.
//	
//
//};
//
//int main() {
//	Test t;
//	
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//
//
//public:
//	int a = 0;
//	Test() {};
//	Test(int b) {
//		a = b;
//		cout << "�⺻������" << a << " ����" << endl;
//	};  
//	~Test() { cout << "��ü" << a << "����" << endl; };
//
//};
//
//int main() {
//	int num = 0;
//	for (int i = num; i < 5; i++) {
//		Test t(i);
//		
//	}
//
//
//	return 0;
//}


//�⺻ ���� ������ ������ �������� 1
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Test {
//private:
//	int _a;
//	string _s;
//
//public:
//	Test(int a = 0 , string s = "pby");    //������Ÿ�Կ� �⺻ ���� �����ְ�
//
//	
//	
//
//};
//
//Test::Test(int a, string s) {    //�Լ� ���Ǻο��� �⺻ ���� ������ �ȵȴ�. 
//	_a = a;
//	_s = s;
//}
//
//int main() {
//	
//	
//
//
//	return 0;
//}

//�⺻ ���� ������ ������ ������ �� 2
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Test {
//private:
//	int _a;
//	string _s;
//
//public:
//	Test(int a = 0, string s = "pby");   //������Ÿ�� �κп� �⺻ ���� ä�� �� ������ ���� ä���� 
//	                                     //ex) Test(int a, int b, int c = 0, int d =0);
//	                                     //�׷��� �Լ� ȣ���� �� �پ��� ��쿡 ���ؼ� �ùٸ��� �۵���
//
//
//
//
//};
//
//Test::Test(int a, string s) {   
//	_a = a;
//	_s = s;
//}
//
//int main() {
//
//
//
//
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;

class Test {
private:
	int _a;
	string _s;

public:
	/*Test& operator=(const Test& t) = delete;*/      //�����Ϸ��� �Ͻ������� ����� ������Կ����� �����ϴ� ����
	Test() :_a(0), _s() { cout << "�⺻ ������ ȣ��"<<endl; }
	Test(int b, string c) {
		_a = b;
		_s = c;
	}
	Test(const Test& t1) : _a(t1._a), _s(t1._s) { cout << "��������� ȣ��"<<endl; }
	int geta() {
		return _a;
	}
	string gets() {
		return _s;
	}



};


Test fun() {
	Test t1(1, "try");
	return t1;
}

int main() {

	Test t3 = fun(); //���� ������ ȣ��
	cout << t3.geta()<<endl;
	cout << t3.gets()<<endl;

	Test t4;
	t4 = t3;  //������ ������������ ��������ڰ� ȣ��ȰŰ� �̰Ŵ� 
	           //���Կ����ڰ� ����Ǽ� ���� ���Եǰ� ��������ڴ� ȣ�� �ȵȴ�.
 
   /* t4 = fun();*/      //�̷��� �� ��� ���� ������ �۵�
	cout << t4.geta() << endl;
	cout << t4.gets();


	return 0;
}

//�ں�ȯ ������
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Test {
//private:
//	int _a;
//
//public:
//	Test(int a) {          //������ �߿��� �Ű������� 1���̰�
//		                   //�Ű������� �⺻ ������ type�� ��쿡 
//		_a = a;            //��ȯ �������̴�.            
//	}
//
//
//
//
//};
//
//
//
//int main() {
//
//	Test t1{ 5 };
//	Test t2 = 3.5;   //��Ȯ�ϰ� ������ Ÿ���� ��ġ������ ������ 
//	               //�������� �ǹ̻� ����� ���� �� �ֱ� ������
//	               //�Ͻ��� ��ȯ�� ���ش�
//	               //���� �� ��츦 �����ϰ� �ʹٸ� ��ȯ ������ �տ� explicit�� �ٿ��ش�
//	               //ex explicit Test(int a)
//
//
//	return 0;
//}


//��ü�� const�� ������ ���
//const ����Լ��� ��� ����

//member initializer

//#include<iostream>
//#include<string>
//using namespace std;
//
//class Test {
//private:
//	const int _a;
//	string _s;
//
//public:
//	Test(int a, string s) :_a{ a }, _s{ s }{         //member initializer�� ������ ����� �����Ǵ� ������ �ʱ�ȭ�� �����ϱ� ������
//		                                             //const�� �پ��������� �ұ��ϰ� �ʱ�ȭ ����
//		                                             //������ �Լ� body �κ�{}����  _a = a; �� �ʱ�ȭ�ϸ� ���� �߻�
//		                                             //�Լ� body �κ��� ������ ����� ������ ������ ����Ǳ� ������
//		                                             //��, ������ ȣ��+member initializer�� �Լ� body ���� ����ð��� �� ������
//		/*_a = a;
//		_s = s;*/
//	}
//
//
//
//
//};
//
//
//int main() {
//
//    const Test test{3, "ptr"};
//
//
//	return 0;
//}