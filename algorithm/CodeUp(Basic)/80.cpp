#include <iostream>
using namespace std;

// �������� ����
// ù��° �װ�, ������ �˸� ����� ������ ���� �� �̚�. 
// a + (n-1) * d
// a ù���� ���� ��
// n ���° ������
// d ������ �� (�󸶳� ���̳�����)

int main()
{
	int a, d, n;
	int count = 0;
	cin >> a >> d >> n;

	count = a + (n - 1) * d;
	cout << count << endl;
}