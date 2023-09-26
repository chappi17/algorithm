#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (int i = 0; i < queries.size(); i++)
    {
        int s = queries[i][0];
        int e = queries[i][1];
        int k = queries[i][2];

        for (int j = s; j <= e; j++)
        {
            if (j % k == 0)
            {
                arr[j] += 1;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        answer.emplace_back(arr[i]);
    }
    return answer;
}

int main()
{
    solution({ 0,1,2,4,3 }, { {0,4,1},{0,3,2},{0,3,3} });
}