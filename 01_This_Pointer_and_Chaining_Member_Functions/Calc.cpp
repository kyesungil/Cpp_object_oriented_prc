#include "Calc.h"





Calc::Calc(int val_in)
	: m_val(val_in)
{
	std::cout << "this: "<< this << std::endl; // this pointer로 주소 출력
}

//Calc::Calc(int val_in)
//{
//	this->setValue(val_in);		 // this가 숨어 있는것
//	// (*this).setValue(val_in);     // 멤버 접근 
//}

Calc& Calc::add(int val_in)
{
	m_val += val_in;
	return *this;
}

Calc& Calc::sub(int val_in)
{
	m_val -= val_in;
	return *this;
}

Calc& Calc::mult(int val_in)
{
	m_val *= val_in;
	return *this;
}

void Calc::Calc_print()
{
	std::cout << m_val << std::endl;
}
