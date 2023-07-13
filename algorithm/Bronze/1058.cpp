#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// 직사각형에서 탈출 
int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int left = x;
	int right = w - x;
	int bottom = y;
	int Top = h - y;

	int min_dist = min(min(left, right), min(bottom, Top));
	cout << min_dist << endl;

	return 0;
}