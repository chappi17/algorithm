#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ���� 3�� �Է¹���
// ���� �ڷ������� ��ȯ��Ŵ
// sort �ؼ� ������������ ����
// ���

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	vector<int> numbers = { a,b,c };

	sort(numbers.begin(), numbers.end());

	for (auto number : numbers)
	{
		cout << number << " ";
	}

	return 0;
}