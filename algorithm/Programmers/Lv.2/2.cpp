#include <string>
#include <vector>

using namespace std;

// 문자열 돈다.
// 돌면서 공백이거나, 첫글자인거 판별하기 
// 공백은 문자열로, 첫글자인거는 bool 로 판별
// 판별하고 대문자 소문자로 표현하여 데이터 담기


string solution(string s) {
    string answer = "";
    bool newword = true;

    for (char a : s)
    {
        if (a == ' ')
        {
             answer.push_back(a);
             newword = true;
        }
        
        else if (newword == true &&isalpha(a))
        {
            answer.push_back(toupper(a));
            newword = false;
        }
 
        else
        {
            answer.push_back(tolower(a));
            newword = false;
        }
    }

    return answer;
}
int main()
{
    solution("for the last week");
}