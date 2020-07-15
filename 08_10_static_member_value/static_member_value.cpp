#include <iostream>
/* 정적 멤버 변수 */
using namespace std;

class Something
{
public:
	static int s_value;	// static 멤버 변수는 초기화 불가능
						// static const int s_value = 1; (const가 붙으면 가능)
						// static constexpr int s_value = 1;
};

int Something::s_value = 1; // static멤버일 경우, define in cpp
							// static은 한번 정의

int main()
{
	/* 
		인스턴스를 만들기 전에 Something::s_value의 주소가 있다. 
		왜냐하면 staic으로 정적으로 존재하기 때문에 프로그램이 종료할때 까지 계속 살아있음
	*/
	cout << &Something::s_value << " " << Something::s_value << endl;


	Something st1;
	Something st2;

	st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl; // 출력: 005AC008 2
	cout << &st2.s_value << " " << st1.s_value << endl; // 출력: 005AC008 2

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}


