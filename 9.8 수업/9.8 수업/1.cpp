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
//	Tmp() { cout << "기본 생성자 호출"; }
//
//	Tmp(int a, int b) {
//		cout << "복사 생성자 호출";
//	}
//};
//
//
//int main() {
//	int a = 5;   //복사 초기화
//	int b(5);    //직접 초기화
//	int c{ 5 };  //uniform 초기화
//
//	//차이점
//	//int d = 4.5;   정수부인 4만 저장(암시적 형변환)
//	//int e{4.5}; 컴파일 에러가 뜬다
//
//	/*Tmp t1();  Tmp를 리턴하고 인자를 받지 않는 함수 t1으로 인식한다. (객체 t1 x)
//	*             
//	Tmp t2{};*/   //클래스를 초기화할 때는 가능한 uniform 형식으로 초기화 하는게 좋다.  
//
//	Tmp t1{};
//
//
//	return 0;
//}

//stream :임시저장공간, 일종의 buffer

//#include<iostream>
//#include<sstream>   //ostringstream 객체 사용하기위해서
//using namespace std;
//
//int main() {
//
//	ostringstream output;
//	output << "출력";  //output 객체 내부에 출력한다
//
//
//	return 0;
//}

//기본 type (int, double, char ...)등은 함수로 전달할때 pass by value 방식 써도 된다
//클래스 type 객체를 함수로 전달할 때는 참조로 전달하는게 좋다.
//ex) Time 클래스의 객체를 사용할 때 받는 부분에 Time& time


// 함수로 전달할 때 const 활용법
//const가 안 붙으면 함수로 전달할 때 lvalue만 전달할 수 있다. rvalue는 전달 못함
//const가 붙으면 함수로 전달할 때 lvalue, rvalue 다 전달 가능(단, const가 붙은 객체로 받으면 원본값을 수정할 수 없다.)
//lvalue: 실제 변수
//rvalue: 임시값



//try{

  /* throw         //예외가 있는지 체크하는 블럭, 예외가 발생하면 throw 실행
  *                //throw는 예외 객체를 만들고 catch 블럭으로 던진다

}


  catch{            

                   //예외에 대한 처리를 한다, catch가 없으면 에러 발생

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
//        cout << a << "이/가 뽑혔다.";
//    }
//
//   
//
//    return 0;
//}
