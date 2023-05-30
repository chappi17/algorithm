#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

// 소리 파일 저장용량 계산하기 
int main()
{
	double w, h, b;
	cin >> w >> h >> b;

	double result = (w * h * b) / 8 / 1024 / 1024;

	cout << fixed;
	cout.precision(2);

	cout << result << " MB";
}