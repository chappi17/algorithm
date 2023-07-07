#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;

    int last = num_list.back();
    int previous = num_list[num_list.size() - 2];

    if (last > previous)
    {
        answer =num_list;
        answer.push_back(last - previous);
    }
    else
    {
        answer = num_list;
        answer.push_back(last * 2);
    }
    return answer;
}




int main()
{
    solution({ 2,1,6 });
}
