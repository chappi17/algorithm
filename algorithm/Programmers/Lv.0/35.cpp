#include <string>
#include <vector>

using namespace std;

int GDM(int x, int y)
{
    int R = 0;
    R = x % y;
    while (R != 0)
    {
        x = y;
        y = R;
        R = x % y;
    }

    return y;
}

int LCM(int x, int y, int z)
{
    int temp = 0;
    temp = (x * y) / z;
    return temp;
}


int solution(int n) {
    int answer = 0;
    int temp = 0;
    temp = GDM(6, n);
    answer =LCM(6, n, temp);

    answer /= 6;
    return answer;
}

int main()
{
    solution(4);
}