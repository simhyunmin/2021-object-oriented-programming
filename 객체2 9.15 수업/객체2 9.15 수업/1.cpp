//데이터 멤버를 레퍼런스 형식으로 리턴하는 멤버 함수 (절대 하면 안된다)
//#include "Test.h"
//using namespace std;
//
//int main() {
//	Test t;
//	unsigned int& b{ t.top() };         //레퍼런스 형식으로 a를 리턴했기 때문에 b는 a로 가는 통로를 가지고 있는 셈이다.
//
//	b = 10;
//
//	cout << t.geta()<<" "<<b;           //따라서 b를 통해 a의 값을 조정할 수 있다. (*에러)
//	return 0;
//}

//소멸자
//:객체가 소멸될때 자동으로 호출된다.
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
//	cout << a << "생성"<<endl;
//}
//Test::~Test() {
//	cout << a << "소멸"<<endl;
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
//	Test c(2);                      //1생성, 2생성, 3생성, 10생성, 4생성, 5생성, 5소멸, 4소멸, 10소멸, 3소멸, 2소멸, 1소멸
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
//	cout << a << "소멸" << endl;
//}
//
//
//
//int main() {
//
//	test test = 10;       //객체에 할당 연산자를 사용하는 경우 오른쪽의 rvalue는 변환 생성자의 매개변수로 넘어간다.
//	                      //변환 생성자가 없을 경우에는 오류 발생
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
//	cout <<a<<"소멸" << endl;
//}
//
//Test::Test(int b) {
//	a = b;
//	cout << b << "생성" << endl;
//}
//
//int main() {
//
//	Test test[3] = { Test(1), Test(2), Test(3) };      //1생성, 2생성, 3생성, 3소멸, 2소멸, 1소멸
//
//
//	return 0;
//}

//객체가 지역 변수 객체로 만들어진건지 전역 변수, static 변수로 만들어진건지에 따라 소멸 순서가 달라질 수 있다.
//stack 다음에 data 순서대로 나간다.
//stack segment: 지역
//data segment:전역, static


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
//	Tmp& operator=(const Tmp& t) = delete;   //컴파일러가 암시적으로 만드는 복사 대입 연산자 삭제
//	~Tmp() = default;  
//	//default
//	//:컴파일러가 암시적으로 생성하는 소멸자랑 동일한 내용을 사용하겠다는 의미
//	//Tmp(){} 대신에 Tmp() = default; 이렇게 사용할 수 있다.
//
//
//};
//
//int main() {
//	Tmp t1;
//	Tmp t2 = t1;
//	Tmp t3;
//	t3 = t1;   //따라서 이 연산이 수행되지 않고 Tmp 객체는 복사는 허용하고 대입은 허용하지 않는 클래스가 된다. 
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
//	void number(double a) = delete;              //delete를 이런식으로 쓸 수도 있다. 
//	
//
//
//};
//
//int main() {
//	Tmp t1;
//
//	t1.number(3);
//	t1.number(3.5);           //double 타입을 받는 number함수를 삭제했기 때문에 number(int a) 함수에 안 들어가고 사용하지 못한다고 뜬다. 
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

//_phone는 매개변수를 받지 않았기 때문에 "Phone constructor"문장이 나오지 않고
//소멸될 때만 나와서 생성, 소멸 개수 차이가 생긴 것 같다.


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
//		cout << "TOSS 객체 생성"<<endl; }
//	~Toss() { cout << "TOSS객체 소멸"<<endl; }
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
//		cout << "TEST객체 생성" << endl; 
//	}
//	~Test() { cout << "TEST객체 소멸"<<endl; }
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
//	Test() { cout << "1생성"; }
//	Test(const Test& p) : a{ p.a } {
//		cout << "2생성";
//	}
//};
//
//int main() {
//	Test test1;
//	Test test2{ test1 };
//	return 0;
//}

