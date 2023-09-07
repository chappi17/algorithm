#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;

    
    for (auto str : arr)
    {
        if (find(delete_list.begin(), delete_list.end(), str) == delete_list.end())
        {
            answer.emplace_back(str);
        }
    }

    return answer;
}

int main()
{
    solution({ 293, 1000, 395, 678, 94 }, { 94, 777, 104, 1000, 1, 12 });
}