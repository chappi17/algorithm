#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string solution(string my_string, int s, int e) {
   
    //for (int i=s,j=e; i <j; i++, --j)
    //{
    // swap(my_string[i], my_string[j]);
    //}

    reverse(my_string.begin() + s, my_string.begin() + e+1);
    return my_string;
}

int main()
{
    solution("Progra21Sremm3", 6, 12);
}