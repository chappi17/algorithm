#include <iostream>

using namespace std;

int main()
{
	int b;
	int sum = 0;
	cout << "���� ������ �Է��Ͻʽÿ� (0���� ����)" << "\n";

	while (true)
	{
		cin >> b;
		if (b == 0)
		{
			break;
		}
		sum += b;
	}
	cout << "���� ������ �հ��" << sum << "�Դϴ�";


}