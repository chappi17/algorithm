#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string temp = "";
    temp = to_string(age);

    6    for (char a : temp)
    {
        answer += (a - '0') + 'a';
    };

    return answer;
}
int main()
{
    solution(23);
}