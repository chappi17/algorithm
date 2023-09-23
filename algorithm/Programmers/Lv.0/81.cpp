#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;
    string temp;
    for (int a = i; a <= j; a++)
    {
        temp += to_string(a);
    }

    for (char x : temp)
    {
        if (x == (char)k+'0')
        {
            answer++;
        }
    }
    return answer;
}

int main()
{
    solution(1, 13, 1);
}