#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    vector<int> temp;

    for (auto query : queries)
    {
        int s = query[0];
        int e = query[1];
        int k = query[2];

        for (int i = s; i <= e; i++)
        {
            if (arr[i] > k)
            {
                temp.emplace_back(arr[i]);                
            }
        }
        sort(temp.begin(), temp.end());
        if (temp.empty())
        {
            answer.emplace_back(-1);
        }
        else
        {
            answer.emplace_back(temp[0]);
        }
        temp.clear();
    }
    return answer;
}

int main()
{
    solution({ 0,1,2,4,3 }, { {0,4,2},{0,3,2},{0,2,2} });
}