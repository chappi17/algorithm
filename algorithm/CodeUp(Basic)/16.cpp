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

	// setw ����� 2�ڸ��� ������
	// setfill ���ڸ��� 0���� ä���
	// �׷��� 10 �̸��϶� 0 �ٴ°� ����
	cout << setw(4) << setfill('0') << y << ".";
	cout << setw(2) << setfill('0') << m << ".";
	cout << setw(2) << setfill('0') << d;
}
