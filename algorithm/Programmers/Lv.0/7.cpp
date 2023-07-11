#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> return_answer;

    for (vector<int> ex : commands)
    {
        int i = ex[0];
        int j = ex[1];
        int k = ex[2];

        for (int a = i[0]; a < i[1]; a++)
        {
            answer.emplace_back(a);
        }
        sort(answer.begin(), answer.end());
        for (int a = 1; a <= answer.size(); a++)
        {
            if (a == i[2])
                return_answer.emplace_back(a);
        }
    }

    return answer;
}