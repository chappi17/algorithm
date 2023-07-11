#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list, int n) 
{
    vector<int>answer;
    for (int i = n-1; i < num_list.size(); i++)
    {
        answer.emplace_back(num_list[i]);
    }
    return answer;
}

int main()
{
    solution({ 2,1,6 }, 3);
}