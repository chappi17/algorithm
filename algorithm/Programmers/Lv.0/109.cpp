#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;

    for (int a : array)
    {
        while (a > 0)
        {
            int digit = a % 10;
            if (digit == 7)
            {
                answer++;
            }
            a /= 10;
        }
    }
    return answer;
}

int main()
{
    solution({ 7,77,17 });
}

// 한자릿수 마다 무언가를 구한다면 하나씩 나머지 10을 하고 (자릿수) % -> 본래의 값을 10으로 나누면 됨