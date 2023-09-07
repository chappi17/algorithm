#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> names) {
    vector<string> answer;

    for (int i = 0; i < names.size(); i++)
    {
        if (i == 0 || i % 5 == 0)
        {
            answer.push_back(names[i]);
        }
    }

    return answer;
}

int main()
{
    solution({ "nami", "ahri", "jayce", "garen", "ivern", "vex", "jinx" });
}