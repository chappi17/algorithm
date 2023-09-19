#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b, int c) {
    int answer = 0;

    if (a != b && a != c && b != c)
    {
        answer = a + b + c;
    }
    else if ((a == b && a != c) || (a != b && b == c) || (a == c && b != c))
    {
        answer = (a + b + c) * (pow(a, 2) + pow(b, 2)+ pow(c, 2));
    }

    else if ( a == b && a == c && b ==c)
    {
        answer = (a + b + c)* (pow(a, 2) + pow(b, 2) + pow(c, 2))* (pow(a, 3) + pow(b, 3) + pow(c, 3));
    }
    return answer;
}

int main()
{
    solution(4,4,4);
}