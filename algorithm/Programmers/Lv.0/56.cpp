#include <string>
#include <vector>

using namespace std;

int judge(int n)
{
    if (n == 0) return true;

    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 0 && digit != 5)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

vector<int> solution(int l, int r) {
    vector<int> answer;

    for (int i = l; i <= r; i++)
    {
        if (i % 10 == 0 || i % 10 == 5)
        {
            if (judge(i))
            {
                answer.emplace_back(i);
            }
        }
    }


    if (answer.empty())
    {
        answer.emplace_back(-1);
    }
    return answer;
}

int main()
{
    solution(5, 555);
}