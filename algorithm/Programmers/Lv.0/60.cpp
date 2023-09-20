#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int temp = 0;

    for (char a : number)
    {
        answer += a - '0';
    }
    answer %= 9;

    return answer;
}

int main()
{
    solution("78720646226947352489");
}