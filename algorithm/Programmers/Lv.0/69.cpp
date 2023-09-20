#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int m, int c) {
    string answer = "";
    string temp = "";
    for (int i = 0; i <= my_string.size(); i++)
    {
        if (temp.size() == m)
        {
            answer += temp[c-1];
            temp.clear();
        }
        temp += my_string[i];
    }
    return answer;
}

int main()
{
    solution("ihrhbakrfpndopljhygc",4,2);
}