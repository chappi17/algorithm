#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer1 = 0;
    int answer2 = 0;
    for (int i = 0; i < num_list.size(); i++)
    {
        if (i % 2 == 0)
        {
            answer1 += num_list[i];
        }
        else answer2 += num_list[i];
    }

    if (answer1 == answer2)
    {
        return answer1;
    }

    return answer1 > answer2 ? answer1 : answer2;
}

int main()
{
    solution({ 4,2,6,1,7,6 });
}