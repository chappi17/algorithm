#include <iostream>

using namespace std;

class GameObject
{
public:

	void damage(int amount)
	{
		cout << "Damage is: " << amount << "\n";
	}

	void damage(string type)
	{
		cout << "Damage type is: " << type << "\n";
	}

};

int main()
{
	GameObject enemy;

	enemy.damage(30);
	enemy.damage("Fire");
}