#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd_str = "";
    string even_str = "";

    for(int i=0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 != 0)  // if the number is odd
        {
            odd_str += to_string(num_list[i]);  // add it to the odd_str
        }
        else  // the number is even
        {
            even_str += to_string(num_list[i]);  // add it to the even_str
        }
    }
    
    // convert the strings to integers
    int odd_num = stoi(odd_str);
    int even_num = stoi(even_str);

    // sum the two numbers
    int result = odd_num + even_num;
    
    return result;  // return the result
}

int main()
{
    solution({ 3,4,5,2,1 });
}