#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// �Ҹ� ���� ����뷮 ����ϱ� 
int main()
{
	double w, h, b;
	cin >> w >> h >> b;

	double result = (w * h * b) / 8 / 1024 / 1024;

	cout << fixed;
	cout.precision(2);

	cout << result << " MB";
}