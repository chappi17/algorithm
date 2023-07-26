#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//long long 을 자릿수로 나눠서 벡터에 저장 


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