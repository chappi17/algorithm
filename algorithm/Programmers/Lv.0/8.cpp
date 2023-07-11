#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string rny_string) {
    string answer = "";

    for (char c : rny_string)
    {
        if (c == 'm')
        {
            answer += "rn";
        }
        else
            answer += c;
    }
    return answer;
}
int main()
{
    solution("masterpiece");

    return 0;
}