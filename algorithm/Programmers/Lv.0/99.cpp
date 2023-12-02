#include <iostream>
#include <string>

using namespace std;

string add(string one, string two)
{
    string result;
    int plus = 0;
    int i = one.length() - 1;
    int j = two.length() - 1;

    while (i >= 0 || j >= 0 || plus > 0)
    {
        int digit1 = i >= 0 ? one[i] - '0' : 0;
        int digit2 = j >= 0 ? two[j] - '0' : 0;

        int sum = digit1 + digit2 + plus;
        plus = sum / 10;
        sum %= 10;

        result = char('0' + sum) + result;
        i--;
        j--;
    }
    return result;
}


string solution(string a, string b) {
    string answer = "";

   answer = add(a, b);
    return answer;
}

int main()
{
    solution("18446744073709551615", "287346502836570928366");
}