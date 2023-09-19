#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    int temp = 0;

    temp = stoi(number);

    while (temp >0)
    {
        answer += temp % 10;
        temp /= 10;        
    }
    answer %= 9;

    return answer;
}

int main()
{
    solution("78720646226947352489");
}