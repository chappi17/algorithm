#include <string>
#include <vector>

using namespace std;

int GCM(int x, int y)
{
    int R;
    int A;
    R = x % y;
    while (R != 0)
    {
        x = y;
        y = R;
        R = x % y;
    }
    A = y;
    return A;
}

int LCM(int x, int y, int z)
{
    int A;
    A = (x * y) / z;
    return A;
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(GCM(n, m));
    answer.push_back(LCM(n,m,GCM(n,m)));

    return answer;
}

int main()
{
    solution(3, 12);
}