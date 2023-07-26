#include <string>
#include <iostream>
#include <vector>

using namespace std;

// 약수구하기
// 구한 값들 더 하기


int solution(int n) {
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
        }
    }
    cout << answer << endl;
    return answer;
}

int main()
{
    solution(5);
}