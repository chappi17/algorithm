#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string phone_number) {
    string answer = "";

    for (int i = 0; i < phone_number.size(); i++)
    {
        if (phone_number.size() - 4 <= i)
        {
            answer += phone_number[i];
        }
        else
            answer += "*";
    }

    return answer;
}
int main()
{
    solution("01033334444");
}