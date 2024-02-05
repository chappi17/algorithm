#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


void removeElement(vector<int>& nums, int val)
{
	// j �� ����
	int j = 0;
	// nums for�� ����
	for (int i = 0; i < nums.size(); i++)
	{
		// nums�� val �� ������, i++ �� �Ѿ, (��ġ�ϴ� ���Ҵ� ������, �ƴѰ� �ڷ� �����ٰ� �����ؾ��ҵ�) 
		if (nums[i] != val)
		{
			// �ٸ���, nums�� j �ڸ��� nums[i]�� ��
			nums[j] = nums[i];
			// j�� �������� �Ѿ
			j++;
		}
	}

	nums.resize(j);
}

vector<int> findMaxMin(vector<int>& nums)
{
	// �ּڰ�, �ִ� �ʱ�ȭ
	int max = nums[0];
	int min = nums[0];

	// for�� ���鼭, ������ ���� max ���� ũ�� max ����
	// ������ ���� min ���� ������ min �����ϸ�  �ִ� �ּҰ� ���� �� ����
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
	// ���� �� �ܾ ��ȯ�ϱ� ���� ���� �ʱ�ȭ
	string longest = "";

	// arr for�� ����
	for (string x : arr)
	{
		// x�� ���̰� ���� �涧
		if (x.length() > longest.length())
		{
			// longest ����
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
	// ���� ���
	int minprice = INT_MAX;
	int maxprofit = 0;

	for (int price : prices)
	{
		// �ּ� ���� �׻� ���ϱ�
		minprice = min(minprice, price);
		// ���� ���ҿ� ���� ���� ���ϱ�
		int profit = price - minprice;
		// ������ ���� �߿��� ���� ū ���� ����
		maxprofit = max(maxprofit, profit);
	}

	return maxprofit;
}

void rotate(vector<int>& nums, int k)
{
	int n = nums.size();

	if (n == 0 || (k % n == 0)) return;

	// ���ۺ��� ��ü - Ư�� index ���� ������
	reverse(nums.begin(), nums.begin() + n - k);
	// ������ ������
	reverse(nums.begin() + n - k, nums.end());
	// ��ü������ ��������, ȸ���ϴ� ��ó�� ������
	reverse(nums.begin(), nums.end());

}

int maxSubArray(vector<int>& nums)
{
	// ���ӵ� �ִ�κ� �迭�� ��
	// ���ӵ� ���ڵ��� ���� ū ��
	int maxSum = INT_MIN;
	// �������� ���� ����
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