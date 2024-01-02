#include <iostream>
#include <memory>

using namespace std;

//class GameObject
//{
//public:
//	int id_;
//	GameObject(int id) :id_(id) 
//	{
//		cout << "GameObject created with id: " << id_ << "\n";
//	}
//
//	~GameObject()
//	{
//		cout << "GameObject destroyed with id: " << id_ << "\n";
//	}
//};
//
//int main()
//{
//	unique_ptr<GameObject> GameObj = make_unique<GameObject>(1);
//	unique_ptr<GameObject> GameObj2 = make_unique<GameObject>(2);
//
//	cout << "Using GameObject with id " << GameObj->id_ << "\n";
//	cout << "Using GameObject with id " << GameObj2->id_ << "\n";
//
//	return 0;
//}

class GameAsset
{
public:
	string name_;

	GameAsset(const string& name) : name_(name)
	{
		cout << "GameAsset Created :" << name_ << "\n";
	}
	~GameAsset()
	{
		cout << "GameAsset Destroyed :  " << name_ << "\n";
	}

};

int main()
{
	shared_ptr<GameAsset> Sound = make_shared<GameAsset>("SoundManager");

	{
		shared_ptr<GameAsset> BaseSound = Sound;

		cout << "Sound name : " << Sound->name_ << "\n";
		cout << "Base Sound name : " << BaseSound->name_ << "\n";
	}
		cout << "Sound name : " << Sound->name_ << "\n";

	return 0;
}
