#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int x = 0;
    
    for (int i = 2; i < n; i++)
    {
        int sum = 0;
        sum = n % i;

        if (sum == 1)
        {
            answer = i;
            break;
        }
    }
    return answer;
}

int main()
{
    solution(10);
}