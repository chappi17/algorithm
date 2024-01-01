#include <iostream>
#include <string>

using namespace std;

class HighScore
{
public:
	HighScore(const string& playername,int score);

	string GetPlayerName() const
	{
		return playername_;
	};

	int GetScore() const
	{
		return score_;
	}

	HighScore* GetNext() const
	{
		return next_;
	}
	
	HighScore* GetPrev() const
	{
		return prev_;
	}

	void SetNext(HighScore* next)
	{
		next_ = next;
	}
	
	void SetPrev(HighScore* prev)
	{
		prev_ = prev;
	}

private:
	string playername_;
	int score_;
	HighScore* next_;
	HighScore* prev_;

};

class HighScoreList
{
public:
	HighScoreList();

	void AddHighScore(const string& playername, int score)
	{
		HighScore* newScore = new HighScore(playername, score);

		if (!head_)
		{
			head_ = newScore;
			tail_ = newScore;
		}
		else
		{
			// 새로운 노드의 prev 포인터에 tail 노드에 연결
			newScore->SetPrev(tail_);
			// tail 이었던 노드의 next 포인터를 현재 노드에 연결
			tail_->SetNext(newScore);
			// tail이라는 타이틀을 현재 노드에 부여
			tail_ = newScore;
		}
	}

	void Display()
	{
		HighScore* current = head_;
		while (current)
		{
			cout << current->GetPlayerName() << ":" << current->GetScore() << endl;
			current = current->GetNext();
		}
	}

	void SortAscending() {
		if (!head_ || !head_->GetNext()) {
			// If the list is empty or has only one element, it's already sorted
			return;
		}

		bool swapped;
		do {
			swapped = false;
			HighScore* current = head_;
			HighScore* prev = nullptr;

			while (current->GetNext()) {
				if (current->GetScore() > current->GetNext()->GetScore()) {
					// Swap nodes
					HighScore* next = current->GetNext();
					HighScore* nextNext = next->GetNext();

					if (prev) {
						prev->SetNext(next);
					}
					else {
						head_ = next; // Update head if needed
					}

					next->SetPrev(prev);
					next->SetNext(current);
					current->SetPrev(next);
					current->SetNext(nextNext);

					swapped = true;
				}

				prev = current;
				current = current->GetNext();
			}
			tail_ = current; // Update tail after each pass
		} while (swapped);
	}


private:
	HighScore* head_;
	HighScore* tail_;
};

int main()
{
	HighScoreList HighScores;
	
	HighScores.AddHighScore("Player1", 100);
	HighScores.AddHighScore("Player2", 50);
	HighScores.AddHighScore("Player3", 200);


	HighScores.SortAscending();
	HighScores.Display();
	return 0;
}





HighScore::HighScore(const string& playername,int score)
	:playername_(playername),
	score_(score)
{
}

HighScoreList::HighScoreList()
	: head_(nullptr),
	tail_(nullptr)
{
}
