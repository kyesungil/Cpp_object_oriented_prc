#include <iostream>
#include "Calc.h"

using namespace std;

int main()
{
	// 각 인스턴스들이 포인터를 가지고 있고, 포인터를 볼려면 this을 사용하면 된다.
	
	Calc calc1(10);			       // 출력 주소: 2000
	Calc calc2(20); 		       // 출력 주소: 3000
 
	cout << "&calc1: " << &calc1 << endl; // 출력 주소: 2000
	cout << "&calc2: " << &calc2 << endl; // 출력 주소: 3000

	calc1.add(10).sub(5).mult(2).Calc_print();
	calc2.add(10).sub(5).mult(2).Calc_print();
	
	
	// Calc::setValue(&clac1, 4); == clac1.setValue(4);
	// setValue()에 보이지 않는 포인터가 내부적으로 들어가 있다.
	

	return 0;
}
