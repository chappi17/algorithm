#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    int S = a;
    for (int i = 0; i <= included.size()-1; i++)
    {
        if (included[i] == true)
        {
            
            answer += S;
        }
        S += d;
    }

    return answer;
}

int main()
{
    solution(7, 1, { false,false,false,true, false,false,false });
}