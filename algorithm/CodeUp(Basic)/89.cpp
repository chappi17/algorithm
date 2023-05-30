#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

 // 소리 파일 저장용량 계산하기 
int main()
{
	double h, b, c, s;
	cin >> h >> b >> c >> s;

	double answer = (h * b * c * s) / 8 / 1024 / 1024;
	cout << fixed;
	cout.precision(1);
	cout << answer << " MB";

}