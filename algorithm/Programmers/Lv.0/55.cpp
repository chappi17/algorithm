#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (auto query : queries)
    {
        int k = query[0];
        int e = query[1];

        for (int i = 0; i <1; i++)
        {
            int temp = arr[k];
            arr[k] = arr[e];
            arr[e] = temp;
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
    solution({ 0,1,2,3,4 }, { {0,3},{1,2},{1,4} });
}