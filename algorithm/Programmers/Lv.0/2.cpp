#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = 0;

    for (char arr : control)
    {
        if (arr == 'w')
        {
            n++;
        }
        else if (arr == 's')
        {
            n--;
        }
        else if (arr == 'd')
        {
            n += 10;
        }
        else if (arr == 'a')
        {
            n -= 10;
        }
    }

    return n;
}

int main()
{
    solution(0,"wsdawsdassw");
}