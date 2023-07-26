#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// commands의 0 ,1,2 에서 
// 0 의 0번째 가져오는것


vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;

    for (auto command : commands)
    {
        int i = command[0];
        int j = command[1];
        int k = command[2];

        vector<int> temp(array.begin() + i - 1, array.begin() + j); 

        sort(temp.begin(), temp.end());

        answer.push_back(temp[k-1]);
    }

    return answer;
}

int main()
{
    solution({ 1,5,2,6,3,7,4 }, { {2,5,3},{4,4,1}, {1,7,3} });
}