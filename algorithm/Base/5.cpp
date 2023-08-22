#include <iostream>
using namespace std;

void add(int& a, int& b, const int c)
{
	a += c;
	b += c;
}


int main()
{
	int a, b, c;
	cout << "2과목 분의 점수를 입력하십시오" << "\n";
	cin >> a >> b;
	cout << "더할 점수를 입력하십시오" << "\n";
	cin >> c;

	add(a, b, c);
	cout << c << "점을 더했으므로" << "\n";
	cout << "과목1은 " << a << "이 되었습니다." << "\n";
	cout << "과목2은 " << b << "이 되었습니다." << "\n";



}