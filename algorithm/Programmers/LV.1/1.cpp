#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// �������� Ǯ��
// �������� �迭 ������, �������ΰ� 1���� �����ϱ�

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