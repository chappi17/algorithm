#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    char temp;

    for (int i = num1; i < my_string.size(); i++)
    {
        temp = my_string[num1];
        my_string[num1] = my_string[num2];
        my_string[num2] = temp;
        break;
    }
    answer = my_string;

    return answer;
}
int main()
{
    solution("hello", 1, 2);
}