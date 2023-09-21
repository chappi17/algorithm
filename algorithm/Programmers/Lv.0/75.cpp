#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp= 1;


    for (int i = 1; ; i++)
    {
        temp *= i;

        if (temp > n)
        {
            break;
        }
        answer = i;
    }

    return answer;
}

int main()
{
    solution(3628800);
}