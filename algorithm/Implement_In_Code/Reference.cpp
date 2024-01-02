#include <iostream>
#include <algorithm>

using namespace std;

void increaseScore(int& score, int amount)
{
	score += amount;
}

void healPlayer(int& health, int amount)
{
	health = min(health + amount, 100);
}

int main()
{
	//int playerScore = 0;
	//int playerHealth = 10;

	//increaseScore(playerScore, 30);

	//healPlayer(playerHealth, 10);

	//cout << playerScore << "\n";
	//cout << playerHealth << "\n";


	int x = 10;

	int &Ref = x;
	int y = 20;
	Ref = y;

	cout << Ref << "\n";

}