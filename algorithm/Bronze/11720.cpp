#include <iostream>
using namespace std;

int main()
{
	int n;
	char a[101];

	cin >> n >> a;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		// char�� int �� �ٲ㼭 �����ϱⰡ �ٽ�
		// ���ڿ� ���������� �ٲٷ��� 
		// - '0' �ϸ� �ȴ�.  
		sum += a[i] - '0';
	}
	cout << sum;
	
}