#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long temp = num;
    int count = 0;

    while (temp !=1)
    {
        if (temp % 2 == 0)
        {
            temp /= 2;
            count++;
        }
        else 
        {
            temp = temp * 3 + 1;
            count++;
        }
    }
    if (count == 1)
    {
        return = 0;
    }
    else if (count >= 500)
    {
        return -1;
    }
    else
    {
        answer = count;
    }
    
    return answer;
}

int main()
{
    solution(626331);
}