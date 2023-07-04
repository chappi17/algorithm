#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// 벡터에 모든 string 담아서 FBI 찾기 
// 5명 찾아야함 


int main()
{
	string a;
	vector<int>  z;
	for (int i = 1; i <= 5; i++)
	{
		cin >> a;

		if (a.find("FBI") != string::npos) // 찾는 문자열이 없을때 npos 반환 즉, 
			z.push_back(i);
	}

	if (z.empty())
	{
		cout << "HE GOT AWAY!";
	}
	else
	{
		for (int i = 0; i < z.size(); i++)
		{
			cout << z[i] << " ";
		}
	}




	return 0;
}