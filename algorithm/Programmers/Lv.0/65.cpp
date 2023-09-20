#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";

    unordered_set<char> setting;

    for (char a : my_string)
    {
        if (setting.find(a) == setting.end())
        {
            setting.insert(a);
            answer += a;
        }
    }
    return answer;
}

int main()
{
    solution("people");
}