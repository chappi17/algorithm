#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int count = 0;

    for (int a : num_list)
    {
        while (a != 1)
        {
            if (a % 2 == 0)
            {
                a /= 2;
                count++;
            }
            else
            {
                a =(a - 1)/ 2;
                count++;
            }
        }
        answer += count;
        count = 0;
    }
    return answer;
}

int main()
{
    solution({ 12,4,15,1,14 });
}