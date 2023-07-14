#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] < 0)
        {
            answer = i;
            break;
        }
        else
            answer = -1;
    }

    return answer;
}

int main()
{
    solution({ 12,4,15,38,-2,15 });
}