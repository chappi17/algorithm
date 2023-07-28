#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;

    int temp = 0;

    vector<int> x;

    while (a <b)
    {
        x.emplace_back(a);
        a++;
        if (a == b)
        {
            x.emplace_back(a);
            break;
        }
    }

    while (a >b)
    {
        x.emplace_back(b);
        b++;
        if (a == b)
        {
            x.emplace_back(b);
            break;
        }
    }

    if (a == b)
    {
        if (x.empty())
        {
            x.emplace_back(a);
            for (int i = 0; i < x.size(); i++)
            {
                answer += x[i];
            }
        }
        else
        {
            for (int i = 0; i < x.size(); i++)
            {
                answer += x[i];
            }
        }

    }


    return answer;
}

int main()
{
    solution(3, 3);
}