#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";

    for (char a : rsp)
    {
        if (a == '2')
        {
            answer += "0";
        }

        else if (a == '0')
        {
            answer += "5";
        }

        else if (a == '5')
        {
            answer += "2";
        }
    }
    return answer;
}

int main()
{
    solution("205");
}