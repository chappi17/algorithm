#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

 // �Ҹ� ���� ����뷮 ����ϱ� 
int main()
{
	double h, b, c, s;
	cin >> h >> b >> c >> s;

	double answer = (h * b * c * s) / 8 / 1024 / 1024;
	cout << fixed;
	cout.precision(1);
	cout << answer << " MB";

}