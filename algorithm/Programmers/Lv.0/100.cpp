#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int count = 0;

    for (auto a : str_list)
    {
        if (a == "l")
        {
            for (int i = 0; i < count; i++)
            {
                answer.emplace_back(str_list[i]);
            }
            break;

        }
        else if (a == "r")
        {
            for (int i = str_list.size() - 1; i-count > 0; i--)
            {
                answer.emplace_back(str_list[i]);
            }
            reverse(answer.begin(), answer.end());
            break;
        }
        else
        {
            count++;
        }
    }
    return answer;
}

int main()
{
    solution({ "u","r","d","l","u"});
}