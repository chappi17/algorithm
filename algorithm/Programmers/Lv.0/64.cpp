#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string) {
    string answer = "";

    for (char a : my_string)
    {

        answer +=tolower(a);
    }

    sort(answer.begin(), answer.end());


    return answer;
}

int main()
{
    solution("Bcad");
}