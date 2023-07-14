#include <string>
#include <vector>

// 특정 n에 대해서 연속된 숫자들의 합으로 n까지 만드는 경우의 수 카운트하기
// 1~ 15까지 각각 연속적인 숫자들을 합을 구하다가 n 보다 커지면 초기화 시키거나, n과 같아지면 count ++
// 2~15 다시 시작 
// 반복하고 count 값 출력

using namespace std;

int solution(int n) {
    int answer = 0;
    int a = 0;
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            a += j;
            if (a == n)
            {
                count++;
                a = 0;
                break;
            }
            else if (a > n)
            {
                a = 0;
                break;
            }
        }
    }
        return count;
}

int main()
{
    solution(14);
}