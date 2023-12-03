#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Cal(int a, int b, int c)
{
    return 10000 * a + 100 * b + c;
}

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    int a;
    int b;
    int c;
    vector<int> d;
    vector<pair<int, bool>> result;

    for (int i = 0; i < rank.size(); i++)
    {
        if (attendance[i] == true)
        {
            result.push_back(make_pair(rank[i], attendance[i]));
        }        
    }    
    sort(result.begin(), result.end()); 

    for (int i = 0; i < result.size(); i++)
    {
        for (int j=0; j < rank.size();j++)
        {
            if (rank[j] == result[i].first)
            {
                d.emplace_back(j);
            }
        }
    }

    a = d[0];
    b = d[1];
    c = d[2];

    answer = Cal(a, b, c);
        
    return answer;
}

int main()
{
    solution({ 3,7,2,5,4,6,1 }, { false,true,true ,true ,true ,false,false });
}

// 3,7,2,5,4,6,1   false,true,true ,true ,true ,false,false
// 1,2,3    true,true,true

