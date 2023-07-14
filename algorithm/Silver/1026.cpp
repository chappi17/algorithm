#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// ���̰� n�� �迭 A B 
// �� �迭 �Է¹ޱ�
// �� �迭 ���Ѱ����� �����Ͽ� ���� �ּڰ� �������
// 1�迭 �������� ���� , 2�迭 �������� �����Ͽ� ������ָ� �ּڰ� ����

int main()
{
	int n;
	cin >> n;
	int a = 0;
	vector<int> vec1;
	vector<int> vec2;
	int answer=0;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		vec1.emplace_back(a);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		vec2.emplace_back(a);
	}

	sort(vec1.begin(), vec1.end());
	sort(vec2.rbegin(), vec2.rend());

	for (int i = 0; i < vec1.size(); i++)
	{
		answer += vec1[i] * vec2[i];
	}
	cout << answer << "\n";


	return 0;
}