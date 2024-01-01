#include <iostream>
#include <string>

using namespace std;

class GameObject
{
public:
	GameObject(const string& name);

	string GetName()
	{
		return name_;
	}

	GameObject* GetNext()
	{
		return next_;
	}

	void SetNext(GameObject* next)
	{
		next_ = next;
	}

private:

	string name_;
	GameObject* next_;
};

int main()
{
	GameObject* player = new GameObject("player");
	GameObject* Enemy1 = new GameObject("Enemy1");
	GameObject* Boss = new GameObject("Boss");

	player->SetNext(Enemy1);
	Enemy1->SetNext(Boss);

	GameObject* current = player;
	while (current != nullptr)
	{
		GameObject* next = current->GetNext();
		current = next;
	}
}


/*
	플레이어가 (head) 노드를 만들고 다음 노드에 연결가능하게 함수 만듦. (이름으로 설정)
	Set Next를 통해서 적 노드에 연결 -> Boss까지 연결
	
	탐색
	-> 플레이어로부터 다음으로 넘어가면 보스까지 당도

*/


GameObject::GameObject(const string& name)
	:name_(name)

{
}
