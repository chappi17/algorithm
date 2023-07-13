#include<string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stack;

    for (char c : s)
    {
        if (c == '(')
            stack.push(c);

        else if (!stack.empty() && stack.top() == '(')
        {
            stack.pop();
        }
        else
            return false;
    }
    if (stack.empty())
    {
        return true;
    }
    else
        return false;
}

int main()
{

    solution("(()(");
}