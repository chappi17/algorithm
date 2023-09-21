#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    string answer = "";

    sort(indices.begin(), indices.end());

    for (int i = indices.size()-1; i >= 0; --i)
    {
        my_string.erase(indices[i], 1);
    }
    answer = my_string;


    return answer;
}

int main()
{
    solution("apporoograpemmemprs", { 1,16,6,15,0,10,11,3 });
}