#include <string>
#include <vector>

using namespace std;

string solution(string n_str)
{
	string answer = "";
	int temp = 0;

	temp = stoi(n_str);

	answer = to_string(temp);	

	return answer;
}
int main()
{
	solution("0010");
}