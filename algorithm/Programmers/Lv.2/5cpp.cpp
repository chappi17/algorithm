#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int day;
    stack<int> stack;


    for (int i = 0; i < progresses.size(); i++)
    {
        day = (100 - (progresses[i])) / speeds[i];
        stack.push(day);
    }


    return answer;
}

int main()
{
    solution({ 93,30,55 }, { 1,30,5 });
}