#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	string m_value = "default";

	const string& getValue() const
	{
		cout << "const version" << endl;
		return m_value;
	}

	string& getValue()
	{
		cout << "non-const version" << endl;
		return m_value;
	}
};

int main()
{
	/* const vs non-const �����ε� �� */

	Something something;	   
	something.getValue() = 10; // ���� // ���: non - const version

	const Something something2; 
	something2.getValue();			  // ���: const version

	return 0;
}


