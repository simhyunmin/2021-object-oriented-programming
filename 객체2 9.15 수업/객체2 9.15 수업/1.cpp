//������ ����� ���۷��� �������� �����ϴ� ��� �Լ� (���� �ϸ� �ȵȴ�)
//#include "Test.h"
//using namespace std;
//
//int main() {
//	Test t;
//	unsigned int& b{ t.top() };         //���۷��� �������� a�� �����߱� ������ b�� a�� ���� ��θ� ������ �ִ� ���̴�.
//
//	b = 10;
//
//	cout << t.geta()<<" "<<b;           //���� b�� ���� a�� ���� ������ �� �ִ�. (*����)
//	return 0;
//}

//�Ҹ���
//:��ü�� �Ҹ�ɶ� �ڵ����� ȣ��ȴ�.
//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//	int a;
//public:
//	Test():a(10){};
//	Test(int a);
//	~Test();
//
//};
//
//Test::Test(int b):a(10) {
//	a = b;
//	cout << a << "����"<<endl;
//}
//Test::~Test() {
//	cout << a << "�Ҹ�"<<endl;
//}
//
//void toss(const Test& a) {
//	Test b(4);
//	Test e(5);
//
//}
//
//int main() {
//	int f = 10;
//	Test t(1);
//	Test c(2);                      //1����, 2����, 3����, 10����, 4����, 5����, 5�Ҹ�, 4�Ҹ�, 10�Ҹ�, 3�Ҹ�, 2�Ҹ�, 1�Ҹ�
//	
//	
//
//	{
//		Test d(3);
//		toss(f);
//	}
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class test {
//private:
//	int a;
//public:
//	test() :a(10) {};
//	
//	~test();
//
//};
//
//
//test::~test() {
//	cout << a << "�Ҹ�" << endl;
//}
//
//
//
//int main() {
//
//	test test = 10;       //��ü�� �Ҵ� �����ڸ� ����ϴ� ��� �������� rvalue�� ��ȯ �������� �Ű������� �Ѿ��.
//	                      //��ȯ �����ڰ� ���� ��쿡�� ���� �߻�
//	
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//	int a;
//
//public:
//	Test():a(1){}
//	~Test();
//	Test(int b);
//
//
//};
//
//Test::~Test() {
//	cout <<a<<"�Ҹ�" << endl;
//}
//
//Test::Test(int b) {
//	a = b;
//	cout << b << "����" << endl;
//}
//
//int main() {
//
//	Test test[3] = { Test(1), Test(2), Test(3) };      //1����, 2����, 3����, 3�Ҹ�, 2�Ҹ�, 1�Ҹ�
//
//
//	return 0;
//}

//��ü�� ���� ���� ��ü�� ����������� ���� ����, static ������ ������������� ���� �Ҹ� ������ �޶��� �� �ִ�.
//stack ������ data ������� ������.
//stack segment: ����
//data segment:����, static


//#include<iostream>
//using namespace std;
//
//class Tmp {
//private:
//
//
//public:
//	Tmp(){}
//	Tmp(const Tmp& t) = default;
//	Tmp& operator=(const Tmp& t) = delete;   //�����Ϸ��� �Ͻ������� ����� ���� ���� ������ ����
//	~Tmp() = default;  
//	//default
//	//:�����Ϸ��� �Ͻ������� �����ϴ� �Ҹ��ڶ� ������ ������ ����ϰڴٴ� �ǹ�
//	//Tmp(){} ��ſ� Tmp() = default; �̷��� ����� �� �ִ�.
//
//
//};
//
//int main() {
//	Tmp t1;
//	Tmp t2 = t1;
//	Tmp t3;
//	t3 = t1;   //���� �� ������ ������� �ʰ� Tmp ��ü�� ����� ����ϰ� ������ ������� �ʴ� Ŭ������ �ȴ�. 
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Tmp {
//private:
//
//
//public:
//	Tmp() {}
//	Tmp(const Tmp& t) = default;
//	~Tmp() = default;
//	void number(int a) {
//
//	}
//	void number(double a) = delete;              //delete�� �̷������� �� ���� �ִ�. 
//	
//
//
//};
//
//int main() {
//	Tmp t1;
//
//	t1.number(3);
//	t1.number(3.5);           //double Ÿ���� �޴� number�Լ��� �����߱� ������ number(int a) �Լ��� �� ���� ������� ���Ѵٰ� ���. 
//	
//
//	return 0;
//}


//composition
//#include<iostream>
//#include<string>
//using namespace std;
//class Phone {
//public:
//	Phone(const Phone& p) { cout << "Phone constructor" << endl; }
//	Phone(string n) { cout << "Phone constructor" << endl; }
//	~Phone() { cout << "Phone destructor" << endl; }
//private:
//	string _name;
//};
//
//class Person {
//public:
//	
//	Person(string n, Phone& p) : _name{ n }, _phone{ p }{
//		
//		cout << "Person constructor" << endl;
//	}
//	~Person() { cout << "Person destructor" << endl; }
//
//private:
//	
//	string _name;
//	const Phone _phone;
//};
//
//int main() {
//	
//	Phone ip{ "iPhone 12" };
//	Person psn{ "pby", ip };
//
//	return 0;
//}

//_phone�� �Ű������� ���� �ʾұ� ������ "Phone constructor"������ ������ �ʰ�
//�Ҹ�� ���� ���ͼ� ����, �Ҹ� ���� ���̰� ���� �� ����.


//#include<iostream>
//using namespace std;
//
//
//class Toss {
//private:
//	int a;
//public:
//	Toss() :a{ 1 } {
//		
//		cout << "TOSS ��ü ����"<<endl; }
//	~Toss() { cout << "TOSS��ü �Ҹ�"<<endl; }
//	int getinput() const {
//		return a;
//	}
//};
//
//class Test {
//private:
//	const Toss t2;
//
//public:
//
//	Test(const Toss& p) : t2{ p } {
//		
//		
//		cout << "TEST��ü ����" << endl; 
//	}
//	~Test() { cout << "TEST��ü �Ҹ�"<<endl; }
//	
//};
//
//
//
//int main() {
//	Toss t1;
//	Test test1(t1);
//	
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//	int a;
//public:
//	Test() { cout << "1����"; }
//	Test(const Test& p) : a{ p.a } {
//		cout << "2����";
//	}
//};
//
//int main() {
//	Test test1;
//	Test test2{ test1 };
//	return 0;
//}

