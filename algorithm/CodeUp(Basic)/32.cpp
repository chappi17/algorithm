#include <iostream>

using namespace std;

// 정적 캐스트
// 호환되는 유형간의 명시적 변환을 수행할 수 있는
// 캐스트 연산자 유형
// 변수 x를 아스키 코드로 변환 
int main()
{
	char x;
	cin >> x;
	cout << static_cast<int>(x) << endl;
}