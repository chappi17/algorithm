#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (char a : my_string)
    {
        if (islower(a))
        {
           answer += toupper(a);
        }
        else if (isupper(a))
        {
            answer += tolower(a);
        }
    }
    return answer;
}

int main()
{
    solution("cccCCC");
}