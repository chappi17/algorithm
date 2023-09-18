#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> arr) {
    int answer = 1;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                return 0;
            }
        }
    }
    return answer;
}

int main()
{
    solution({ {19, 498, 258, 587},{63, 93, 7, 754},{258, 7, 1000, 723},{587, 754, 723, 81} });
}