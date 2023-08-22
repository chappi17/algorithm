#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
// map 이용한거
//int largestGroup(const vector<string>& strArr)
//{
//	map<int, int> lengthCount;
//
//	for (const string& str : strArr)
//	{
//		int length = str.size();
//		lengthCount[length]++;
//	}
//
//	int maxSize = 0;
//
//	for (const auto& pair : lengthCount)
//	{
//		maxSize = max(maxSize, pair.second);
//	}
//	return maxSize;
//}
// 
// 
// vector 이용한거

int largestGroup(vector<string>& strArr)
{
	int maxSize = 0;

	for (const string& str : strArr) // strArr 하나씩 반복하는데, 
	{
		int currentSize = 0; // a의 크기가 1 이면 추가
		int length = str.size(); // a의 크기 구하는거

		for (const string& innerStr : strArr) // a 일때 한번 더  strArr돌면서 길이가 1개인거 currentSize에 추가
		{
			if (innerStr.size() == length)
			{
				currentSize++;
			}
		}
		maxSize = max(maxSize, currentSize);
	}

	return maxSize;
}

int main()
{
	vector<string> strArr = { "a","bc","d","efg","hi" };
	cout << largestGroup(strArr);
	return 0;
}