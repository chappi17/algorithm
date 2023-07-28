#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;

    vector<int> a;
        int b = 0;
        int temp = x;
    while (x >0)
    {
        a.emplace_back(x % 10);
        x /= 10;
    }
    for (int i = 0; i < a.size(); i++)
    {
        b += a[i];
    }

    if (temp % b == 0)
    {
        answer = true;
    }
    else
        answer = false;

        return answer;
}

int main()
{
    solution(11);
}