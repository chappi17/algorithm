#include <iostream>

using namespace std;


int count(char str[], char ch)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ch)
		{
			count++;
		}
	}

	return count;
}

int main()
{
	cout << "문자열을 입력하십시오" << "\n";
	char a[10];
	char b;
	int answer;
	cin >> a;
	cout << "문자열에서 검색할 문자를 입력하십시오 " << "\n";
	cin >> b;

	answer = count(a, b);

	cout << a << " 안에 " << b << "은 총 " << answer << "개 있습니다." << "\n";

}