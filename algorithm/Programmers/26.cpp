#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// �߾Ӱ� ���ϱ�
int main()
{
	vector<int> array = { 1,2,7,10,11 };
	int answer = 0;

	sort(array.begin(), array.end());

	answer=array[array.size() / 2];




	return 0;
}


