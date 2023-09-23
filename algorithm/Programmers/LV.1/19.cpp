#include <string>
#include <vector>
#include <set>
using namespace std;

int solution(vector<int> numbers)
{
	set<int> answer = { 0,1,2,3,4,5,6,7,8,9 };

	for (int a : numbers)
	{
		answer.erase(a);
	}
	int sum = 0;
	for (int b : answer)
	{
		sum += b;
	}

	return sum;
}

int main()
{
	solution({ 1,2,3,4,6,7,8,0 });
}