#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//long long �� �ڸ����� ������ ���Ϳ� ���� 


vector<int> solution(long long n) {
    vector<int> answer;

    while (n != 0)
    {
        answer.push_back(n% 10);
        n /= 10;
    }

     return answer;
}

int main()
{
    solution(12345);
}