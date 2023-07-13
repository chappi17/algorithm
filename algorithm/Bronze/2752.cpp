#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 숫자 3개 입력받음
// 벡터 자료형으로 변환시킴
// sort 해서 오름차순으로 변경
// 출력

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