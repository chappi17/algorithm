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
	cout << "2���� ���� ������ �Է��Ͻʽÿ�" << "\n";
	cin >> a >> b;
	cout << "���� ������ �Է��Ͻʽÿ�" << "\n";
	cin >> c;

	add(a, b, c);
	cout << c << "���� �������Ƿ�" << "\n";
	cout << "����1�� " << a << "�� �Ǿ����ϴ�." << "\n";
	cout << "����2�� " << b << "�� �Ǿ����ϴ�." << "\n";



}