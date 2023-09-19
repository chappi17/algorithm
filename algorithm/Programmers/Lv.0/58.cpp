#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    int a, b;
        char op;

    stringstream ss(binomial);
    ss >> a >> op >> b;

    if (op == '+')
    {
        answer = a + b;
    }
    else if (op == '-')
    {
        answer = a - b;
    }
    else if (op == '*')
    {
        answer = a * b;
    }

    /*string a;
    string op;
    string b;
    string temp;

    int one;
    int two;
    for (char A : binomial)
    {
        if (A == '+' || A == '-' || A == '*')
        {
            op = A;
            a = temp;
            temp.clear();
        }
        else if (A != ' ')
        {
            temp += A;
        }
    }
    b= temp;

   one= stoi(a);
   two= stoi(b);

    if (op == "+")
    {
        answer = one + two;
    }
    else if (op == "-")
    {
        answer = one - two;
    }
    else if (op == "*")
    {
        answer = one * two;
    }*/

    return answer;
}
int main()
{
    solution("43 + 12");
}