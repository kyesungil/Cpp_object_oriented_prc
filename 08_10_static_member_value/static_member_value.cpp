#include <iostream>
/* ���� ��� ���� */
using namespace std;

class Something
{
public:
	static int s_value;	// static ��� ������ �ʱ�ȭ �Ұ���
						// static const int s_value = 1; (const�� ������ ����)
						// static constexpr int s_value = 1;
};

int Something::s_value = 1; // static����� ���, define in cpp
							// static�� �ѹ� ����

int main()
{
	/* 
		�ν��Ͻ��� ����� ���� Something::s_value�� �ּҰ� �ִ�. 
		�ֳ��ϸ� staic���� �������� �����ϱ� ������ ���α׷��� �����Ҷ� ���� ��� �������
	*/
	cout << &Something::s_value << " " << Something::s_value << endl;


	Something st1;
	Something st2;

	st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl; // ���: 005AC008 2
	cout << &st2.s_value << " " << st1.s_value << endl; // ���: 005AC008 2

	Something::s_value = 1024;

	cout << &Something::s_value << " " << Something::s_value << endl;

	return 0;
}


