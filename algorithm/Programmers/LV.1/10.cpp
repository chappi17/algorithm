#include <string>
#include <vector>
#include<algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;

    vector<int> a;
    while (n > 0)
    {
        a.emplace_back(n  % 10);
        n /= 10;
    }

    sort(a.rbegin(), a.rend());
    for (int digit : a) 
    {
        answer = answer * 10 + digit;
    }

    return answer;
}

int main()
{
    solution(118372);
}