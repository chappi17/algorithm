#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
// map �̿��Ѱ�
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
// vector �̿��Ѱ�

int largestGroup(vector<string>& strArr)
{
	int maxSize = 0;

	for (const string& str : strArr) // strArr �ϳ��� �ݺ��ϴµ�, 
	{
		int currentSize = 0; // a�� ũ�Ⱑ 1 �̸� �߰�
		int length = str.size(); // a�� ũ�� ���ϴ°�

		for (const string& innerStr : strArr) // a �϶� �ѹ� ��  strArr���鼭 ���̰� 1���ΰ� currentSize�� �߰�
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