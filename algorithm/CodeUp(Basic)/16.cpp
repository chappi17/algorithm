#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
	string x;
	cin >> x;
	stringstream Date(x);
	string y, m, d;
	getline(Date, y, '.');
	getline(Date, m, '.');
	getline(Date, d, '.');

	// setw 출력을 2자리수 까지만
	// setfill 빈자리는 0으로 채우기
	// 그래서 10 미만일때 0 붙는거 가능
	cout << setw(4) << setfill('0') << y << ".";
	cout << setw(2) << setfill('0') << m << ".";
	cout << setw(2) << setfill('0') << d;
}
