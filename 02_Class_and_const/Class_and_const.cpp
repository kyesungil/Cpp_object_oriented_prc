//#include <iostream>
//
//using namespace std;
//
//class Something
//{
//public:
//	int m_value = 0;
//
//	Something()
//	{
//		cout << "Constructor" << endl;
//	}
//
//	void setValue(int value) { m_value = value; }
//	int  getValue() const { return m_value; }
//};
//
//void print(Something st) // (const Something& st)�� ��쿡�� ��������� ��ġ�� �ʴ´�.
//{
//
//	cout << &st << endl;
//
//	cout << st.m_value << endl;
//}
//
//int main()
//{
//	// something.setValue(3);	// const�̸� �ٲܼ� ����.
//	const Something something;	// ���: �����ڿ��� "Constructor"
//	
//
//	/* 
//	  -	�ν��Ͻ��� ���� �ٲ��� �ʴ� �Լ� getValue()�� ȣ���ҷ��� �ص�
//		������ �߻��Ѵ�. ������ �����Ϸ��� �Ǵ��Ҷ� ��(���⼭�� m_value)�� �ٲ�İ� ������ �ƴ� 
//		��� function�� const���� �ƴ����� �Ǵ��Ѵ�. 
//		�׷��� ������ ����ϱ� ���ؼ��� �Լ��� const�� ������Ѵ�.
//
//		tip! 
//		- const�� ������ function�� ��� ������ִ°� ����!(�Ǽ��� ���ϼ� �ִ�.)
//	*/
//	cout << something.getValue() << endl; // 0
//	
//	cout << &something << endl;			  // ���: 012FFB3C
//
//	print(something);					  // ���: 012FFA68, 0
//
//	return 0;
//}