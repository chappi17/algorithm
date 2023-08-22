#include <iostream>

using namespace std;

int length(char* str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}


int main()
{
	char a[10];
	int answer;
	cout << "문자열을 입력하십시오" << "\n";
	cin >> a;

	answer = length(a);
	cout << "문자열의 길이는" << answer << "입니다." << "\n";

}