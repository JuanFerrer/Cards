#ifndef _HAND_H_
#define _HAND_H_

#include "CardClass.h"
#include <vector>

class Hand
{
private:
	std::vector<Card> cards;
	int handValue;

public:
	Hand();
	~Hand();

	//Getters
	const int GetHandValue();
	const int GetHandSize();
	const Card& GetAt(const int&);
	const Card& GetFirst();
	const Card& GetLast();

	//Setters
	void SetHandValue(const int&);

	//Operators

	//Member functions
	void IncludeCard(const Card);
	void SortHand(bool(*comparerAlg)(Card, Card));
	void PrintHand();
};

#endif // !_HAND_H_
