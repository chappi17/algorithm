#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ���̳��� ��Ʈ 
// ��Ģ ã��
// ũ�Ⱑ N �ΰſ��� 1~N ���� ���� ���ڿ� N ���ϸ� ��

int main()
{
	int N;
	int x = 0;
	cin >> N;

	for (int i = 1; i <= N+1; i++)
	{
		x += i;
	}

	cout << N * x << "\n";

	return 0;
}