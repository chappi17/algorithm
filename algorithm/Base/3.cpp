#include <iostream>

using namespace std;

int main()
{
	int b;
	int sum = 0;
	cout << "시험 점수를 입력하십시오 (0으로 종료)" << "\n";

	while (true)
	{
		cin >> b;
		if (b == 0)
		{
			break;
		}
		sum += b;
	}
	cout << "시험 점수의 합계는" << sum << "입니다";


}