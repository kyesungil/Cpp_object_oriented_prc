#include "Calc.h"





Calc::Calc(int val_in)
	: m_val(val_in)
{
	std::cout << "this: "<< this << std::endl;
}

//Calc::Calc(int val_in)
//{
//	this->setValue(val_in);		 // this�� ���� �ִ�.
//	// (*this).setValue(val_in); // ��� ����
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
