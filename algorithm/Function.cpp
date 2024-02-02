#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b ,int c, int d)
{
    vector<int> x;
    x.emplace_back(a);
    x.emplace_back(b);
    x.emplace_back(c);
    x.emplace_back(d);

    sort(x.rbegin(), x.rend());

    int answer = x[0];
    
    return answer;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}