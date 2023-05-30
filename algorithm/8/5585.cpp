#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <ctype.h>

using namespace std;

// °Å½º¸§µ· 
int main()
{
	int x;
	int n = 1000;
	int result;
	int count=0;
	
	cin >> x;

	result = n - x;

	count += result / 500;
	result %= 500;

	count += result / 100;
	result %= 100;

	count += result / 50;
	result %= 50;

	count += result / 10;
	result %= 10;

	count += result / 5;
	result %= 5;

	count += result / 1;
	result %= 1;

	cout << count << " ";
	
}