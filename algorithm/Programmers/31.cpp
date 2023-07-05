#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;

    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list.size() >= 11)
        {
            answer += num_list[i];
        }
        else if (num_list.size() < 10)
            answer *= num_list[i];
    }
    return answer;
}

int main()
{

    solution({ 2,3,4,5 });
}