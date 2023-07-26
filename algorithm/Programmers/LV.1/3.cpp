#include <iostream>

using namespace std;

int solution(int n)
{
    int answer = 0;
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return answer;
}

int main()
{
    solution(987);
}