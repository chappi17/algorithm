#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// ������
// �� N ���� �־�����,
// ���ϴ� 1~3���� �������µ�,
// �������� ���� �������� ����� �̱�� ����
// 4�� �������� �� �� �ƴϸ� �׻� ���� ������ ���� �̱�

int main()
{
	int N;
	cin >> N;

	if (N % 4 == 0 || N %4 == 2)
	{
		cout << "CY" << "\n";
	}
	else
		cout << "SK" << "\n";

	return 0;
}