#include <iostream>
using namespace std;


//�ε� �Ҽ��� �����⸦ �����Ϸ��� �ǿ����� �� �ϳ��� 
// 'float' �Ǵ� 'double'�� ĳ�����Ͽ�
//�ε� �Ҽ��� ������� �����Ⱑ ����ǵ��� �ؾ���.
int main()
{
	int a, b;
	cin >> a >> b;
	
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << fixed;
	cout.precision(2);
	cout << static_cast<float>(a)/b << endl;
}