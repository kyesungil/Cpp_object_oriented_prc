#include <iostream>

using namespace std;

class Something
{
public:
	int m_value = 0;

	Something()
	{
		cout << "Constructor" << endl;
	}

	void setValue(int value) { m_value = value; }
	int  getValue() const { return m_value; }     // const로 막아준 함수-> const로 지정한 인스턴스 경우 호출 가능
};

void print(Something st)       // (const Something& st)일 경우에는 복사과정을 거치지 않는다.
{

	cout << &st << endl;

	cout << st.m_value << endl;
}

int main()
{
	// something.setValue(3);	  // const이면 바꿀서 없다.
	const Something something;	// 출력: 생성자에서 "Constructor"
	

	/* 
	  -	인스턴스의 값을 바꾸지 않는 함수 getValue()을 호출할려고 해도 에러가 발생한다. 
      이유는 컴파일러가 판단할때 값(여기서는 m_value)이 바꿨냐가 기준이 아닌, 
      멤버 function이 const인지 아닌지을 판단한다. 
		  그렇기 때문에 사용하기 위해서는 함수에 const을 쳐줘야한다.

	  Tip! 
		- const로 막아줄 function은 모두 사용해주는게 좋음!(실수를 줄일수 있다.)
	*/
  
	cout << something.getValue() << endl; // 0
	
	cout << &something << endl;			      // 출력: 012FFB3C

	print(something);					            // 출력: 012FFA68, 0

	return 0;
}
