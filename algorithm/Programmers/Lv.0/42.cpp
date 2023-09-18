#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;

    for (char a : my_string)
    {
        if (isdigit(a))
        {
            answer.emplace_back(a-'0');
        }
    }

    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    solution("hi12392");
}