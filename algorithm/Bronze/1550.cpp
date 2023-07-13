#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//16진수 -> 10진수 표현 
// std::hex ( 기본 세팅 변환)
// stoi (입력받는 string, size(nullptr), 기본 10진수이지만, 원하는 진수로) 
// string 변수 x 를 입력받기
// 16진수로 변경되서 출력하기 (stoi)

int main()
{
	string x;
	cin >> x;

	cout << stoi(x, nullptr, 16) << "\n";

	return 0;
}