#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//16���� -> 10���� ǥ�� 
// std::hex ( �⺻ ���� ��ȯ)
// stoi (�Է¹޴� string, size(nullptr), �⺻ 10����������, ���ϴ� ������) 
// string ���� x �� �Է¹ޱ�
// 16������ ����Ǽ� ����ϱ� (stoi)

int main()
{
	string x;
	cin >> x;

	cout << stoi(x, nullptr, 16) << "\n";

	return 0;
}