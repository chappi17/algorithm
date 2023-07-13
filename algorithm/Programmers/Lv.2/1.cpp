#include <sstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string word;
    vector<int> a;

    while (ss >> word)
    {
        a.push_back(stoi(word));
    }
    
    int min = *min_element(a.begin(), a.end());
    int max = *max_element(a.begin(), a.end());

    return to_string(min) + " " + to_string(max);
}

int main()
{
    solution("1 2 3 4");
}
