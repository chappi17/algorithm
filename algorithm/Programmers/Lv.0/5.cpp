#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<char> b;


    for (char a : my_string)
    {
        if (isdigit(a))
        {
            a = a - '0';
            b.push_back(a);
        }
    }

    for (int i = 0; i < b.size(); i++)
    {
        answer += b[i];
    }

    return answer;
}

int main()
{
    solution("aAb1B2cC34oOp");
}