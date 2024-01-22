#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Node
{
public:
	string key;
	int value;
	Node* next;

	Node(string key, int value)
	{
		this->key = key;
		this->value = value;
		next = nullptr;
	}
};

class HashTable
{
private:
	static const int SIZE = 7;
	Node* DataMap[SIZE];

public:
	void PrintTable()
	{
		for (int i = 0; i < SIZE; i++)
		{
			cout << i << ": " << endl;
			if (DataMap[i])
			{
				Node* temp = DataMap[i];
				while (temp)
				{
					cout << "  {" << temp->key << ", " << temp->value << " }" << endl;
					temp = temp->next;
				}
			}
		}
	}

	int hash(string key)
	{
		int hash = 0;
		for (int i = 0; i < key.length(); i++)
		{
			int asciiValue = int(key[i]);
			hash = (hash + asciiValue * 23) % SIZE;
		}
		return hash;
	 }

	void set(string key, int value)
	{
		int index = hash(key);
		Node* newNode = new Node(key, value);
		if (DataMap[index] == nullptr)
		{
			DataMap[index] = newNode;
		}
		else
		{
			Node* temp = DataMap[index];
			while (temp->next != nullptr)
			{
				temp = temp->next;
			}
			temp->next = newNode;
		}
	}

	int get(string key)
	{
		int index = hash(key);
		Node* temp = DataMap[index];
		while (temp != nullptr)
		{
			if (temp->key == key)
			{
				return temp->value;
			}
			temp = temp->next;
		}
		return 0;
	}

	vector<string> keys()
	{
		vector<string> AllKeys;
		for (int i = 0; i < SIZE; i++)
		{
			Node* temp = DataMap[i];
			while (temp != nullptr)
			{
				AllKeys.push_back(temp->key);
				temp = temp->next;
			}
		}
		return AllKeys;
	}

};

bool itemInCommon(vector<int>vect1, vector<int>vect2)
{
	// O(n^2)
	for (auto i : vect1)
	{
		for (auto j : vect2)
		{
			if (i == j) return true;
		}
	}
	return false;
}

bool itemInCommon2(vector<int>vect1, vector<int>vect2)
{
	// O(n)
	unordered_map<int, bool> MyMap;

	for (auto i : vect1)
	{
		MyMap.insert({ i,true });
	}

	for (auto j : vect2)
	{
		if (MyMap[j]) return true;
	}

	return false;
}


int main()
{
	HashTable* MyHT = new HashTable();

	MyHT->set("nails", 100);
	MyHT->set("tile", 50);
	MyHT->set("lumber", 80);

	// 같은 인덱스에 배정받을 수도 있음.
	MyHT->set("bolts", 200);
	MyHT->set("screws", 140);

	//cout << "Lumber: " << MyHT->get("lumber") << endl;
	//cout << "Bolts: " << MyHT->get("bolts") << endl;

	MyHT->PrintTable();

	vector<string> MyKey = MyHT->keys();

	for (auto key : MyKey)
	{
		cout << key << " ";
	}

	vector<int> vect1{ 1,3,5 };
	vector<int> vect2{ 2,4,5 };

//	cout << itemInCommon(vect1, vect2);

	cout << itemInCommon2(vect1, vect2);


	return 0;
}