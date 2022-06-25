//#include<iostream>
//using namespace std;
//
//class A {
//private:                              //const �� ���̴� ����:
//	friend void B( A& c);             //const A& c�� ���ڸ� �����ϸ� ������ ����� ������ �� ����.
//	int a = 10;
//public:
//
//	int geta() {
//		return a;
//	}
//
//};
//
//void B( A& c)
//{
//	c.a += 1;                        //������ ��� ���� ����� �� ���� �Ӹ� �ƴ϶� ���������� �� ���浵 �����ϴ�. 
//
//}
//
//int main() {
//
//	A c;
//	B(c);
//	cout << c.geta();                
//
//	return 0;
//}

//Ŭ���� �� friend ���� ���
//#include<iostream>
//using namespace std;
//
//class B;
//
//class A {
//private:
//	int num1;
//	friend class B;              // B�� AŬ������ ģ����� �Ǿ��־� B�� A�� ������ ����� ����� �� ������ 
//public:                         // �׷��ٰ� A�� B�� ������ ����� ����� ���� ����. 
//};                             // �Ӹ� �ƴ϶� A �ȿ� friend class B, B �ȿ� friend class C�� �������� ��쿡�� A�� C�� ������ ����� ����� �� ����.  
//
//class B {
//private:
//	int num2;
//public:
//};
//
//int main() {
//
//	return 0;
//}

//this ������: ��ü �ڽ��� ����Ű�� ������
//#include<iostream>
//
//using namespace std;
//
//class A {
//private:
//	int num{ 50 };
//public:
//	void B(int num) {
//		cout << this->num;           //this->num: ��ü ������ num 
//		cout << num;                 //�Լ� �������� ���Ǵ� num 
//	}
//};
//
//int main() {
//	A a;
//	a.B(10);
//
//
//	return 0;
//}

//this �����Ͱ� ���̴� ���: ����(cascading) ����
//#include<iostream>
//using namespace std;
//
//class A {
//private:
//	int _number;
//public:
//	A& fun() { return *this; }       //cascading ����
//	                                 //�ڱ� �ڽ��� return �� 
//
//
//};
//
//int main() {
//	A t;
//
//	A& ref = t.fun();
//	t.fun().fun().fun();   //t.fun() �� t�� �Ǳ⶧����
//	                       //t.fun().fun()
//	                       //t.fun() �������� ���� ����
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Test {
//private:
//	int x;
//public:
//	Test(int x) {
//		this->x = x;
//	}
//	void print() const;
//};
//
//void Test::print() const {
//	cout << "x = " << x;
//
//	cout << "\nthis->x = " << this->x;               
//	                                                //�� �Ȱ��� ��µȴ�.
//	cout << "\n(*this).x = " << (*this).x << endl;
//}
//
//int main() {
//
//	Test test{ 12 };
//	test.print();
//
//	return 0;
//}

//static member
//�ֹ߼� ���ֹ߼� ���� ��� ������. 
//������ ������ ����� ��쿡 �������� ������ ��� �����ִ�. 
//�ʱ�ȭ�� 1���� �ȴ�. 
//data segment�� ����ȴ�.
//�ٸ� ��ü�� �����ؼ� ����Ѵ�.    ex) class A �� ����� A a1 A a2 A a3 �� ����� a1, a2, a3 ���� static member ��� ���� 
//���� ���� Ŭ���� ���ο� ����� �� ó�� ��������
//�����δ� Ŭ���� �ܺο� �ϳ��� �����Ѵ�.
//public �ȿ��� ������ ��쿡 ��ü ������ ���� ��쿡�� class �̸�::static member�� ���� ���� �����ϴ�. 
//static ���ο��� �ζ������� �ʱ�ȭ�� �� ����. -> static �ܺο��� int Tmp::a{2} �̷������� �ʱ�ȭ �����ϴ�
//static ��� ������ const�� ������ ��� ��ü ���ο��� ����� ���ÿ� �ʱ�ȭ�� �����ϴ�.


//data segment: ����
//stack segment: ����
//main�Լ��� ����Ǹ� stack �� ���� ������� �� ������ data segment�� �������.
//ex)
//��ü 1���� �������� �����ǰ� ��ü 2���� �������� �����ǰ� �������� ��ü 3���� ���� ��ü 4���� �������� �����ȴٸ�
//    ����         ����
//     4            3
//     1            2
//�̷������� ����ǰ� ���α׷��� ����ǰ� �Ҹ�� �� 
//3 �Ҹ�, 2�Ҹ�, 4�Ҹ�, 1�Ҹ� ������� ����ȴ�. 
//
//

//#include<iostream>
//using namespace std;
//
//class A {
//private:
//	static int total;    //Ŭ���� ���ο��� inline���� �ʱ�ȭ�� �� ����.
//public:
//	static int rotal;
//	static int get(){ return total; }   //static ��� �Լ��� ���� static ��� ������ ��� ������.(��)
//};
//
//int A::total{ 2 };   //Ŭ���� �ܺο��� static ��� �Լ� �ʱ�ȭ
//
//int main() {
//	cout << A::rotal << endl;           //static ��������� public �ȿ��� ������ ��쿡 ��ü�� �������� �ʾƵ� ���������� ��� ���� 
//	cout << A::get() << endl;          //static ��������� private �ȿ��� �����Ǿ��� �� ��ü�� �������� ���� ��쿡 static ��� �Լ��� ���� ���� �޴� ���� �����ϴ� 
//
//	return 0;
//}