#include <iostream>
#include <cmath>
using namespace std;

// ������ ����
// ù��° �װ�, ������ �˸� ����� ������ ���� �� �ִ�
// a * pow(r,n-1);
// a ù���� ���� ��
// n ���° ������
// r ����� �� (�󸶳� ���̳�����)

int main()
{
	int a, r, n;
	long long int count;
	cin >> a >> r >> n;

	count = a * pow(r, n - 1);
	cout << count << endl;
}