//동적 메모리 할당(dynamic memory management)↔ 정적
//:실행시간에 어떠한 동작이 수행되는 것↔ 컴파일 시간
//heap 메모리에 저장된다.
// 클래스를 생성할 때 생성자를 명시적으로 호출할 수 있다. ex) Tmp* ptr = new Tmp[2]{{2,3}, {1, 4}}
// 
// 
// 
//heap 메모리
//:데이터가 차곡차곡 쌓이지 않고 그냥 저장되는 형태.
// 데이터의 이름이 필요없고 타입만 필요하다
//메모리 주소가 실행 시간에 결정된다.
//
//stack 메모리
//메모리 주소가 컴파일 시간에 결정된다. 

//#include<iostream>
//using namespace std;
//
//class Tmp {
//	int a[1000];
//};
//
//int main() {
//	int a{ 5 };
//	int* ptr1{ new int{5} };
//	Tmp* ptr2;
//	ptr2 = new Tmp;
//	int arr[3]{};
//	int* ptr3 = new int[3]{ 4, 5, 6 };
//
//	delete ptr1;      //delete 안해주면 메모리 누수현상 일어남 ★
//	delete ptr2; 
//	delete[] ptr3;    //배열인 경우엔 delete 오른쪽에 [] 배열 기호를 붙여준다.
//	return 0;
//}

//동적 메모리 할당을 이용한 가변 길이 설정
//#include<iostream>
//using namespace std;
//
//int main() {
//	int size;
//	cin >> size;
//	//int a[size] <-error
//	int* p{ new int[size] {} };
//	//int* p = new int[size]{}
//
//	for (int i{ 0 }; i < size; i++) {
//		cout << p[i] << endl;
//	}
//
//	delete[] p;
//	return 0;
//}

//shallow copy(얕은 복사) 
//하나의 메모리 주소를 두개의 포인터가 가리키는 상태 
 
 /*#include<iostream>
using namespace std;

int main() {
	int* p1{ new int{5} };
	int* p2{ p1 };
	cout << *p1 << "\t" << p1 << endl;
	cout << *p2 << "\t" << p2 << endl;
	delete p1;
	cout << *p2 << "\t" << p2 << endl;

	return 0;
}*/
 
 
// deep copy(깊은 복사)
//메모리 공간을 많이 차지하는 포인터를 복사할때
//메모리 공간이 많이 필요하게 된다.
//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int* p1{ new int{5} };
//	int* p2{ new int{*p1} };
//	cout << *p1 << "\t" << p1 << endl;
//	cout << *p2 << "\t" << p2 << endl;
//	delete p1;
//	cout << *p2 << "\t" << p2 << endl;
//	/*cout << *p1 << "\t" << p1 << endl;*/  //에러 발생
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Tmp {
//private:
//	int a;
//public:
//	Tmp(int a) { 
//		this->a = a;
//		cout << a << "객체 생성" << endl;
//	}
//	~Tmp() {
//		cout << a << "객체 소멸" << endl;
//	}
//};
//
//int main() {
//
//	Tmp* test1 = new Tmp{ 1 };
//	Tmp* test2 = new Tmp{ 2 };
//	Tmp* test3 = new Tmp{ 3 };
//
//	delete test1;                      //동적 할당하는 경우 delete 하는 순서로 소멸자가 실행된다. 
//	delete test2;                      //delete 하지 않는 경우 객체의 소멸자가 실행되지 않는다.
//	delete test3;
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//class Tmp {
//private:
//	int a;
//public:
//	Tmp(int a) {
//		this->a = a;
//		cout << a << "객체 생성" << endl;
//	}
//	~Tmp() {
//		cout << a << "객체 소멸" << endl;
//	}
//	Tmp(const Tmp & t1 ):a{ t1.a }{
//		cout << a << "객체 생성" << endl;
//	}
//
//	int geta(){
//		return a;
//	}
//    void seta(int b) {
//		a += b;
//	}
//};
//
//int main() {
//
//	Tmp* test1 = new Tmp{ 4 };                                 //test1, test2, test3 는 하나의 객체를 공유해서 사용
//	Tmp* test2{ test1 };
//	cout << test2->geta()<<endl;
//	test2->seta(3);
//	cout << test2->geta() << " " << test1->geta() << endl;
//	Tmp* test3{ test2 };
//
//	delete test1;       
//	
//
//	return 0;
//}


//c언어 스타일의 문자열 처리 방법

//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//
//int main() {
//
//	string a = "hello";
//
//
//	const char* s1{ "pby" };          
//	//c언어에서 문자열은 배열로 처리하거나 포인터로 처리한다
//	//상수라서 앞에 const 무조건 붙여줘야함
//
//	const char* s2{ s1 };// 받을 때도 물론 const 붙여줘야함
//	//char s2 [] = "pby" // 배열로 받을때는 원본값이 그대로 존재하기 때문에 const 안 붙여줘도됌
//	char* s3{ new char[strlen(s1) + 1] };
//	for (int i{ 0 }; s1[i] != '\0'; i++) {
//		s3[i] = s1[i];
//	}
//	s3[strlen(s1)] = '\0';
//
//	cout << a << endl;
//	cout << s1 << "\t" << static_cast<const void*>(s1) << endl;   //포인터 변수가 c언어 스타일의 문자열일 때는
//	cout << s2 << "\t" << static_cast<const void*>(s2) << endl;   //변수를 출력했을 때 주소가 나오는게 아니라 문자열이 나온다.
//	cout << s3 << "\t" << static_cast<void*>(s3) << endl;
//
//}
// 
// //void 포인터
//데이터 타입이 없는 포인터
//역참조를 할 수 없다.
//주소만 가지고 있고 타입은 모르는 형태
//어떤 데이터 타입의 포인터든 void 포인터로 변환 가능함
