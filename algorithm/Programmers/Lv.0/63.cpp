#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
	int answer = 0;
	string b = "";
	int count = 0;
	char k_char = k + '0';

	b = to_string(num);

	for (char a : b)
	{
		count++;
		if (a == k_char)
		{
			answer = count;
			break;
		}
	}
	if (answer == 0)
	{
		answer = -1;
	}
	return answer;
}

int main()
{
	solution(123456, 7);
}