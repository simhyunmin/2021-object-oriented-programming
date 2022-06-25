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
//	cout << "기본생성자" << a << " 생성" << endl; };    //명시적으로 생성된 생성자가 존재하기 때문에 컴파일러가 암시적으로 기본 생성자를 생성 안한다.
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
//		cout << "기본생성자" << a << " 생성" << endl;
//	};  
//	~Test() { cout << "객체" << a << "삭제" << endl; };
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


//기본 값을 가지는 생성자 주의할점 1
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
//	Test(int a = 0 , string s = "pby");    //프로토타입에 기본 값을 적어주고
//
//	
//	
//
//};
//
//Test::Test(int a, string s) {    //함수 정의부에는 기본 값을 적으면 안된다. 
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

//기본 값을 가지는 생성자 주의할 점 2
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
//	Test(int a = 0, string s = "pby");   //프로토타입 부분에 기본 값을 채울 때 오른쪽 부터 채우자 
//	                                     //ex) Test(int a, int b, int c = 0, int d =0);
//	                                     //그래야 함수 호출할 때 다양한 경우에 대해서 올바르게 작동함
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
	/*Test& operator=(const Test& t) = delete;*/      //컴파일러가 암시적으로 만드는 복사대입연산자 삭제하는 구문
	Test() :_a(0), _s() { cout << "기본 생성자 호출"<<endl; }
	Test(int b, string c) {
		_a = b;
		_s = c;
	}
	Test(const Test& t1) : _a(t1._a), _s(t1._s) { cout << "복사생성자 호출"<<endl; }
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

	Test t3 = fun(); //복사 생성자 호출
	cout << t3.geta()<<endl;
	cout << t3.gets()<<endl;

	Test t4;
	t4 = t3;  //위에는 생성과정에서 복사생성자가 호출된거고 이거는 
	           //대입연산자가 실행되서 값만 대입되고 복사생성자는 호출 안된다.
 
   /* t4 = fun();*/      //이렇게 할 경우 복사 생성자 작동
	cout << t4.geta() << endl;
	cout << t4.gets();


	return 0;
}

//★변환 생성자
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Test {
//private:
//	int _a;
//
//public:
//	Test(int a) {          //생성자 중에서 매개변수가 1개이고
//		                   //매개변수가 기본 데이터 type인 경우에 
//		_a = a;            //변환 생성자이다.            
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
//	Test t2 = 3.5;   //명확하게 데이터 타입이 일치하지는 않지만 
//	               //생성자의 의미상 충분히 받을 수 있기 때문에
//	               //암시적 변환을 해준다
//	               //만약 위 경우를 배제하고 싶다면 변환 생성자 앞에 explicit를 붙여준다
//	               //ex explicit Test(int a)
//
//
//	return 0;
//}


//객체가 const로 생성된 경우
//const 멤버함수만 사용 가능

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
//	Test(int a, string s) :_a{ a }, _s{ s }{         //member initializer는 데이터 멤버가 생성되는 시점에 초기화를 진행하기 때문에
//		                                             //const가 붙어있음에도 불구하고 초기화 가능
//		                                             //하지만 함수 body 부분{}에서  _a = a; 로 초기화하면 오류 발생
//		                                             //함수 body 부분은 데이터 멤버가 생성된 다음에 실행되기 때문에
//		                                             //즉, 생성자 호출+member initializer은 함수 body 보다 실행시간이 더 빠르다
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