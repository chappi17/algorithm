#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    vector<int> answer;

    if (n == 1)
    {
        for (int i = 0; i <= slicer[1]; i++)
        {
            answer.emplace_back(num_list[i]);
        }
    }
    else if (n == 2)
    {
        for (int i = slicer[0]; i < num_list.size(); i++)
        {
            answer.emplace_back(num_list[i]);
        }
    }
    else if (n == 3)
    {
        for (int i = slicer[0]; i <= slicer[1]; i++)
        {
            answer.emplace_back(num_list[i]);
        }
    }
    else if (n == 4)
    {
        for (int i = slicer[0]; i <= slicer[1];)
        {
            answer.emplace_back(num_list[i]);
            i += slicer[2];
        }
    }

    return answer;
}

int main()
{
    solution(4, {1,5,2}, { 4,5,6,7,8,9 });
}