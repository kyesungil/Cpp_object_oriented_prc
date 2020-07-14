#pragma once
#include <iostream>

/* 8.7_This_Pointer_and_Chaining_Member_Functions */

class Calc
{
private:
	int m_val;

public:
	/* Constructor */
	Calc(int val_in);

	/* 자기자신을 반환 함으로서 연쇄적으로 이용 */
	Calc& add(int val_in);
	Calc& sub(int val_in);
	Calc& mult(int val_in);

	void Calc_print();
	void setValue(int val_in) { m_val = val_in; }
	int  getValue() {return m_val;}
};