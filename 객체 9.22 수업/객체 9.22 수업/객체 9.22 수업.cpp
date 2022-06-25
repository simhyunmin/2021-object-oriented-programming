//���� �޸� �Ҵ�(dynamic memory management)�� ����
//:����ð��� ��� ������ ����Ǵ� �͡� ������ �ð�
//heap �޸𸮿� ����ȴ�.
// Ŭ������ ������ �� �����ڸ� ��������� ȣ���� �� �ִ�. ex) Tmp* ptr = new Tmp[2]{{2,3}, {1, 4}}
// 
// 
// 
//heap �޸�
//:�����Ͱ� �������� ������ �ʰ� �׳� ����Ǵ� ����.
// �������� �̸��� �ʿ���� Ÿ�Ը� �ʿ��ϴ�
//�޸� �ּҰ� ���� �ð��� �����ȴ�.
//
//stack �޸�
//�޸� �ּҰ� ������ �ð��� �����ȴ�. 

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
//	delete ptr1;      //delete �����ָ� �޸� �������� �Ͼ ��
//	delete ptr2; 
//	delete[] ptr3;    //�迭�� ��쿣 delete �����ʿ� [] �迭 ��ȣ�� �ٿ��ش�.
//	return 0;
//}

//���� �޸� �Ҵ��� �̿��� ���� ���� ����
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

//shallow copy(���� ����) 
//�ϳ��� �޸� �ּҸ� �ΰ��� �����Ͱ� ����Ű�� ���� 
 
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
 
 
// deep copy(���� ����)
//�޸� ������ ���� �����ϴ� �����͸� �����Ҷ�
//�޸� ������ ���� �ʿ��ϰ� �ȴ�.
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
//	/*cout << *p1 << "\t" << p1 << endl;*/  //���� �߻�
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
//		cout << a << "��ü ����" << endl;
//	}
//	~Tmp() {
//		cout << a << "��ü �Ҹ�" << endl;
//	}
//};
//
//int main() {
//
//	Tmp* test1 = new Tmp{ 1 };
//	Tmp* test2 = new Tmp{ 2 };
//	Tmp* test3 = new Tmp{ 3 };
//
//	delete test1;                      //���� �Ҵ��ϴ� ��� delete �ϴ� ������ �Ҹ��ڰ� ����ȴ�. 
//	delete test2;                      //delete ���� �ʴ� ��� ��ü�� �Ҹ��ڰ� ������� �ʴ´�.
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
//		cout << a << "��ü ����" << endl;
//	}
//	~Tmp() {
//		cout << a << "��ü �Ҹ�" << endl;
//	}
//	Tmp(const Tmp & t1 ):a{ t1.a }{
//		cout << a << "��ü ����" << endl;
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
//	Tmp* test1 = new Tmp{ 4 };                                 //test1, test2, test3 �� �ϳ��� ��ü�� �����ؼ� ���
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


//c��� ��Ÿ���� ���ڿ� ó�� ���

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
//	//c���� ���ڿ��� �迭�� ó���ϰų� �����ͷ� ó���Ѵ�
//	//����� �տ� const ������ �ٿ������
//
//	const char* s2{ s1 };// ���� ���� ���� const �ٿ������
//	//char s2 [] = "pby" // �迭�� �������� �������� �״�� �����ϱ� ������ const �� �ٿ��൵��
//	char* s3{ new char[strlen(s1) + 1] };
//	for (int i{ 0 }; s1[i] != '\0'; i++) {
//		s3[i] = s1[i];
//	}
//	s3[strlen(s1)] = '\0';
//
//	cout << a << endl;
//	cout << s1 << "\t" << static_cast<const void*>(s1) << endl;   //������ ������ c��� ��Ÿ���� ���ڿ��� ����
//	cout << s2 << "\t" << static_cast<const void*>(s2) << endl;   //������ ������� �� �ּҰ� �����°� �ƴ϶� ���ڿ��� ���´�.
//	cout << s3 << "\t" << static_cast<void*>(s3) << endl;
//
//}
// 
// //void ������
//������ Ÿ���� ���� ������
//�������� �� �� ����.
//�ּҸ� ������ �ְ� Ÿ���� �𸣴� ����
//� ������ Ÿ���� �����͵� void �����ͷ� ��ȯ ������
