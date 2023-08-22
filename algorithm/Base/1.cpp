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
	string begin = "얼마나 숫자를 입력할텐가";
	
	print(begin);
	cin >> count;


	for (int i = 0; i <count ; i++)
	{
		cout << i+1 << "번째 숫자 ㄱ" << "\n";
		cin >> num;
		sum += num;
		num = 0;
	}
	cout << count<<"개의 정수의 합은"<<sum <<"입니다." << "\n";
}