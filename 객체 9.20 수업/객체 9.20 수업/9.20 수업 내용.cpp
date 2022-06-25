//#include<iostream>
//using namespace std;
//
//class A {
//private:                              //const 안 붙이는 이유:
//	friend void B( A& c);             //const A& c로 인자를 설정하면 데이터 멤버를 변경할 수 없다.
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
//	c.a += 1;                        //데이터 멤버 값을 사용할 수 있을 뿐만 아니라 직접적으로 값 변경도 가능하다. 
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

//클래스 간 friend 문법 사용
//#include<iostream>
//using namespace std;
//
//class B;
//
//class A {
//private:
//	int num1;
//	friend class B;              // B가 A클래스의 친구라고 되어있어 B가 A의 데이터 멤버를 사용할 수 있지만 
//public:                         // 그렇다고 A가 B의 데이터 멤버를 사용할 수는 없다. 
//};                             // 뿐만 아니라 A 안에 friend class B, B 안에 friend class C로 선언했을 경우에도 A가 C의 데이터 멤버를 사용할 수 없다.  
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

//this 포인터: 객체 자신을 가리키는 포인터
//#include<iostream>
//
//using namespace std;
//
//class A {
//private:
//	int num{ 50 };
//public:
//	void B(int num) {
//		cout << this->num;           //this->num: 객체 내부의 num 
//		cout << num;                 //함수 내에서만 사용되는 num 
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

//this 포인터가 쓰이는 경우: 연속(cascading) 연산
//#include<iostream>
//using namespace std;
//
//class A {
//private:
//	int _number;
//public:
//	A& fun() { return *this; }       //cascading 연산
//	                                 //자기 자신을 return 함 
//
//
//};
//
//int main() {
//	A t;
//
//	A& ref = t.fun();
//	t.fun().fun().fun();   //t.fun() 은 t가 되기때문에
//	                       //t.fun().fun()
//	                       //t.fun() 과정으로 연산 수행
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
//	                                                //↕ 똑같이 출력된다.
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
//휘발성 비휘발성 성질 모두 가진다. 
//스코프 내에서 선언된 경우에 스코프가 끝나도 계속 남아있다. 
//초기화는 1번만 된다. 
//data segment에 저장된다.
//다른 객체랑 공유해서 사용한다.    ex) class A 를 만들고 A a1 A a2 A a3 를 만들면 a1, a2, a3 전부 static member 사용 가능 
//얼핏 보면 클래스 내부에 선언된 것 처럼 보이지만
//실제로는 클래스 외부에 하나만 존재한다.
//public 안에서 생성한 경우에 객체 생성을 안한 경우에도 class 이름::static member를 통해 접근 가능하다. 
//static 내부에서 인라인으로 초기화할 수 없다. -> static 외부에서 int Tmp::a{2} 이런식으로 초기화 가능하다
//static 멤버 변수가 const로 생성된 경우 객체 내부에서 선언과 동시에 초기화가 가능하다.


//data segment: 전역
//stack segment: 지역
//main함수가 종료되면 stack 이 먼저 비워지고 그 다음에 data segment가 비워진다.
//ex)
//객체 1번이 전역으로 생성되고 객체 2번이 지역으로 생성되고 다음으로 객체 3번이 지역 객체 4번이 전역으로 생성된다면
//    전역         지역
//     4            3
//     1            2
//이런식으로 저장되고 프로그램이 종료되고 소멸될 때 
//3 소멸, 2소멸, 4소멸, 1소멸 순서대로 진행된다. 
//
//

//#include<iostream>
//using namespace std;
//
//class A {
//private:
//	static int total;    //클래스 내부에서 inline으로 초기화할 수 없다.
//public:
//	static int rotal;
//	static int get(){ return total; }   //static 멤버 함수는 오직 static 멤버 변수만 사용 가능함.(★)
//};
//
//int A::total{ 2 };   //클래스 외부에서 static 멤버 함수 초기화
//
//int main() {
//	cout << A::rotal << endl;           //static 멤버변수가 public 안에서 생성된 경우에 객체가 생성되지 않아도 직접적으로 사용 가능 
//	cout << A::get() << endl;          //static 멤버변수가 private 안에서 생성되었을 때 객체가 생성되지 않은 경우에 static 멤버 함수를 통해 값을 받는 것이 가능하다 
//
//	return 0;
//}