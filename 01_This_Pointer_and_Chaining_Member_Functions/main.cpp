#include <iostream>
#include "Calc.h"

using namespace std;

int main()
{
	Calc calc1(10);
	Calc calc2(20);

	cout << "&calc1: " << &calc1 << endl;
	cout << "&calc2: " << &calc2 << endl;

	calc1.add(10).sub(5).mult(2).Calc_print();
	calc2.add(10).sub(5).mult(2).Calc_print();
	


	return 0;
}