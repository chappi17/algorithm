#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    int here = 0;
    int next = 0;
    for (int i = 0; i < numLog.size()-1; i++)
    {
        here = numLog[i];
        next = numLog[i + 1];

        if (next - here ==1)
        {
            answer += "w";
        }
        else if (next - here == -1)
        {
            answer += "s";
        }
        else if (next - here == 10)
        {
            answer += "d";
        }
        else if (next - here == -10)
        {
            answer += "a";
        }

    }

    return answer;
}

int main()
{
    solution({ 0,1,0,10,0,1,0,10,0,-1,-2,-1 });
}