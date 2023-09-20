#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;

    for (auto a : queries)
    {
        int s = a[0];
        int e = a[1];

        for (int i = s; i <= e; i++)
        {
            arr[i]++;
        }
    }

    return answer;
}

int main()
{
    solution({ 0,1,2,3,4 }, { {0,1},{1,2},{2,3} });
}