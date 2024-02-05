#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void removeElement(vector<int>& nums, int val)
{
	// j 는 고정
	int j = 0;
	// nums for문 돌기
	for (int i = 0; i < nums.size(); i++)
	{
		// nums가 val 과 같으면, i++ 로 넘어감, (일치하는 원소는 앞으로, 아닌건 뒤로 보낸다고 생각해야할듯) 
		if (nums[i] != val)
		{
			// 다르면, nums의 j 자리에 nums[i]가 들어감
			nums[j] = nums[i];
			// j는 다음으로 넘어감
			j++;
		}
	}

	nums.resize(j);
}

vector<int> findMaxMin(vector<int>& nums)
{
	// 최솟값, 최댓값 초기화
	int max = nums[0];
	int min = nums[0];

	// for문 돌면서, 원소의 값이 max 보다 크면 max 대입
	// 원소의 값이 min 보다 작으면 min 대입하면  최대 최소값 구할 수 있음
	for (int b : nums)
	{
		if (b > max)
		{
			max = b;
		}
		else if (b < min)
		{
			min = b;
		}

	}
	return vector<int> {max, min};
}

string findLongestString(vector<string>& arr)
{
	// 가장 긴 단어를 반환하기 위한 변수 초기화
	string longest = "";

	// arr for문 돌기
	for (string x : arr)
	{
		// x의 길이가 가장 길때
		if (x.length() > longest.length())
		{
			// longest 선언
			longest = x;
		}
	}
	return longest;
}

int removeDuplicates(vector<int>& nums)
{
	if (nums.empty()) return 0;

	int index = 0;
	for (int i = 1; i < nums.size(); i++)
	{
		if (nums[i] != nums[index])
		{
			index++;
			nums[index] = nums[i];
		}
	}
	return index + 1;
}

int maxProfit(vector<int>& prices)
{
	// 기준 잡기
	int minprice = INT_MAX;
	int maxprofit = 0;

	for (int price : prices)
	{
		// 최소 가격 항상 비교하기
		minprice = min(minprice, price);
		// 현재 원소에 대한 이익 구하기
		int profit = price - minprice;
		// 누적된 이익 중에서 가장 큰 이익 고르기
		maxprofit = max(maxprofit, profit);
	}

	return maxprofit;
}

void rotate(vector<int>& nums, int k)
{
	int n = nums.size();

	if (n == 0 || (k % n == 0)) return;

	// 시작부터 전체 - 특정 index 까지 뒤집고
	reverse(nums.begin(), nums.begin() + n - k);
	// 나머지 뒤집고
	reverse(nums.begin() + n - k, nums.end());
	// 전체적으로 뒤집으면, 회전하는 것처럼 보여짐
	reverse(nums.begin(), nums.end());

}

int maxSubArray(vector<int>& nums)
{
	// 연속된 최대부분 배열의 합
	// 연속된 숫자들의 가장 큰 합
	int maxSum = INT_MIN;
	// 검토중인 현재 숫자
	int endSum = 0;

	for (int a : nums)
	{
		endSum = max(endSum + a, a);
		maxSum = max(endSum, maxSum);
	}

	return maxSum;
}


int main()
{
	vector<int> a = { 1,1,1,2,2,3,4,4,4 };
	vector<int> d = {-1,-2,-3,-4,-5};
	int val = 10;
	vector<int> b;
	vector<string> stringlist = { "watermelon","apple","banana" };

	//removeElement(a, val);
	 b =findMaxMin(a);
	 findLongestString(stringlist);
	 removeDuplicates(a);
	 maxProfit(d);
	 rotate(d, 2);
	 maxSubArray(d);


	return 0;
}