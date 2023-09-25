#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    int pos = myString.rfind(pat);

    if (pos != string::npos)
    {
        answer = myString.substr(0, pos + pat.length());
    }

    return answer;
}

int main()
{
    solution("AAAAaaaa", "a");
}