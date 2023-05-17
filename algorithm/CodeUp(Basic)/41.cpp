#include <iostream>
using namespace std;


//부동 소수점 나누기를 수행하려면 피연산자 중 하나를 
// 'float' 또는 'double'로 캐스팅하여
//부동 소수점 산술에서 나누기가 수행되도록 해야함.
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