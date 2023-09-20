#include <string>
#include <vector>

using namespace std;

int solution(int order) {
    int answer = 0;
    string b;
    b =to_string(order);

    for (char a : b)
    {
        if (a == '3' || a == '6' || a == '9')
        {
            answer++;
        }
    }
    return answer;
}

int main()
{
    solution(29423);
}