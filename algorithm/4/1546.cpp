#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	int n,s;
	vector<double> v;
	double result = 0.0f;
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		v.push_back(s);
	}

	int b = *max_element(v.begin(), v.end());

	vector<double>::iterator iter;

	for (iter = v.begin(); iter != v.end(); iter++)
	{
		double bb = *iter;
		bb =(bb / b) * 100;
		*iter = bb;
	}

	double bbb=0;
	for (iter = v.begin(); iter != v.end(); iter++)
	{
		bbb += *iter;		
	}
	result = bbb / n;
	cout.precision(10);
	cout << result << endl;
}