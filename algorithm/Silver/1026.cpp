#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// 길이가 n인 배열 A B 
// 각 배열 입력받기
// 두 배열 곱한값들을 누적하여 더해 최솟값 만드려면
// 1배열 오름차순 정렬 , 2배열 내림차순 정렬하여 계산해주면 최솟값 나옴

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