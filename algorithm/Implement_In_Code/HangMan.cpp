/*
행맨
입력 받아서 단어 만들기
-> 단어 만든거 토대로 화면이 "-" 띄우기
-> 단어 입력을 하게 하고, 맞추면 - -> 단어로 바꾸기
-> 틀리면 횟수 까기
-> 그 전에 다 맞추면 클리어 했다고 띄우고 다시할꺼냐고 묻기

*/

#include <iostream>
#include <string>
#include <vector>
#include <windows.h>

using namespace std;

class InitGame
{
private:
	int count;
	string answer;
	string type;
	bool winorlose;
public:
	InitGame()
		: count(0),
		answer(""),
		type(""),
		winorlose(false)
	{	}

	void SetAnswer()
	{
		cin >> answer;
		system("cls");
	}

	void UpdateBoard(char guess)
	{
		bool found = false;
		for (int i = 0; i < answer.size(); i++)
		{
			if (answer[i] == guess)
			{
				type[i] = guess;
				found = true;
			}
		}

		if (!found)
		{
			count++;
			DrawHangMan();
		}
	}

	void DrawHangMan()
	{
		/*
		_____
		|   |
		|   O
		|  /|\
		|  / \
		|

		*/
		switch (count)
		{
		case 1: 
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "You left 5 times left" << endl;
			break;
		case 2:
			cout << " -----" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;

			cout << "You left 4 times left" << endl;
			break;
		case 3:
			cout << " -----" << endl;
			cout << "|     |" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "You left 3 times left" << endl;
			break;
		case 4:
			cout << " -----" << endl;
			cout << "|     |" << endl;
			cout << "|     O" << endl;
			cout << "|" << endl;
			cout << "|" << endl;
			cout << "|" << endl;

			cout << "You left 2 times left" << endl;
			break;
		case 5:
			cout << " -----" << endl;
			cout << "|     |" << endl;
			cout << "|     O" << endl;
			cout << "|    /|\\" << endl;
			cout << "|" << endl;
			cout << "|" << endl;

			cout << "You left 1 times left" << endl;
			break;
		case 6:
			cout << " -----" << endl;
			cout << "|        |" << endl;
			cout << "|        O" << endl;
			cout << "|       /|\\" << endl;
			cout << "|       / \\" << endl;
			cout << "|" << endl;

			winorlose = true;
			EndGame();
			break;
				
		default: 
			break;
		}
	}

	void EndGame()
	{
		if (winorlose == true && count < 6)
		{
			cout << "Great!" << endl;
		}
		else 
		{
			cout << "You Lose!" << endl;	
		}
			Continue();
	}

	void Continue()
	{
		char yorn;
		cout << "Do you want restart game? (y/n)" << endl;
		cin >> yorn;

		if (yorn == 'y')
		{
			StartNewGame();
		}
		else if (yorn == 'n')
		{
			system("exit");
			
		}
		else
		{
			cout << "You type wrong text" << endl;
			Continue();
		}
	}

	void StartNewGame()
	{
		count = 0;
		winorlose = false;
		cout << "Type the Word you Will guess" << endl;
		cin >> answer;
		type = string(answer.size(), '-');
		PlayGame();
	}

	void PlayGame()
	{
		while (count < 6 && type !=answer)
		{
			cout << type << endl;
			cout << "Guess a letter : ";
			char guess;
			cin >> guess;
			UpdateBoard(guess);

			if (type == answer)
			{
				winorlose = true;
				EndGame();
			}
		}

	}

	void InitGamemode()
	{
		StartNewGame();
	}

};

int main()
{
	InitGame game;

	game.InitGamemode();
	return 0;
}