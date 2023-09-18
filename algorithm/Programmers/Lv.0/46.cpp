#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string temp;

    for (char a : myString)
    {
        if (a != 'x')
        {
            temp += a;
        }
        else
        {
            if (!temp.empty())
            {
                answer.emplace_back(temp);
                temp = "";
            }
        }
    }

    if (!temp.empty())
    {
        answer.emplace_back(temp);
    }

    sort(answer.begin(), answer.end());

    return answer;
}

int main()
{
    solution("axbxcxdx");
}3