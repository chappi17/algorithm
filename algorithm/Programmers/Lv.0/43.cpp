#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) {

    for (int i = idx; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            return 1;
        }
    }
}
int main()
{
    solution({ 1,1,1,1,0 }, 3);
}