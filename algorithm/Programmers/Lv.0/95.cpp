#include <string>
#include <vector>
#include <bitset>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";

    unsigned long num1 = bitset<64>(bin1).to_ulong();
    unsigned long num2 = bitset<64>(bin2).to_ulong();

    unsigned long sum = num1 + num2;

    bitset<64> sumBitset(sum);
    answer =sumBitset.to_string().substr(sumBitset.to_string().find_first_not_of('0'));
    
    return answer;
}

int main()
{
    solution("1001", "1111");
}