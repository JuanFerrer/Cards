#ifndef _DECK_H_
#define _DECK_H_

#include "CardClass.h"
#include <vector>
#include <random>

class Deck
{
private:
	std::vector<Card> cards;

	std::random_device rd;	//Random device
	std::mt19937 mt;		//Mersenne Twister

public:
	Deck();
	Deck(std::vector<Card>);
	~Deck();

	//Getters
	Card GetAt(const int&) const;
	Card GetTop() const;
	Card GetBottom() const;
	int GetSize() const;

	//Operators

	//Member functions
	void Suffle(int times = 1);
	Card DrawCard();
};


#endif // !_DECK_H_

