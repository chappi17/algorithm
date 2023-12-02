#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int i = 0;

    for (auto a : arr)
    {
        if (i < arr.size())
        {
            if (answer.empty())
            {
                answer.emplace_back(arr[i]);
                i++;
            }
            else if (answer[answer.size() - 1] == arr[i])
            {
                answer.pop_back();
                i++;
            }
            else
            {
                answer.emplace_back(arr[i]);
                i++;
            }
        }
    }
    if (answer.empty())
    {
        answer.emplace_back(-1);
    }

    return answer;
}

int main()
{
    solution({ 0,1,1,1,0 });
}