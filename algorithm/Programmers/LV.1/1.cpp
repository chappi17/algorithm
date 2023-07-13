#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// 스택으로 풀것
// 연속적인 배열 있을때, 연속적인건 1개만 저장하기

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    stack<int> stack;

    for (int num : arr)
    {
        if (stack.empty() || stack.top() != num)
        {
            stack.push(num);
            answer.push_back(num);
        }
    }



    return answer;
}

int main()
{
    solution({ 1,1,3,3,0,1,1 });
}