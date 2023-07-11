#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    if (str1.find(str2) != string::npos)
    {
        return 1;
    }
    else
        return 2;

}

int main()
{
    solution("ab6CD443fgh","6CD");
}