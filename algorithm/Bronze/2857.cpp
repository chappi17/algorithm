#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
// ���Ϳ� ��� string ��Ƽ� FBI ã�� 
// 5�� ã�ƾ��� 


int main()
{
	string a;
	vector<int>  z;
	for (int i = 1; i <= 5; i++)
	{
		cin >> a;

		if (a.find("FBI") != string::npos) // ã�� ���ڿ��� ������ npos ��ȯ ��, 
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