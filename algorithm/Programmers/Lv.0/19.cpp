#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    sort(num_list.begin(), num_list.end());

    for (int i = 5; i < num_list.size(); i++)
    {
        cout << num_list[i] << " ";
        answer.push_back(num_list[i]);
    }
        return answer;
}

int main()
{
    solution({ 12, 4, 15, 46, 38, 1, 14, 56, 32, 10 });
}