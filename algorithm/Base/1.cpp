#include <iostream>

using namespace std;

void print(string a)
{
	cout << a << "\n";
}

int main()
{
	int sum = 0;
	int num = 0;
	int count = 0;
	string begin = "�󸶳� ���ڸ� �Է����ٰ�";
	
	print(begin);
	cin >> count;


	for (int i = 0; i <count ; i++)
	{
		cout << i+1 << "��° ���� ��" << "\n";
		cin >> num;
		sum += num;
		num = 0;
	}
	cout << count<<"���� ������ ����"<<sum <<"�Դϴ�." << "\n";
}