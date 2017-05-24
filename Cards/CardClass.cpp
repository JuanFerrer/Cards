#include "CardClass.h"

#include <iostream>
#include <string>

Card::Card(Rank newRank, Suit newSuit)
{
	MSuit = newSuit;
	MRank = newRank;
}

Card::Card(const Card &rhs)
{
	MSuit = rhs.MSuit;
	MRank = rhs.MRank;
}

Card::~Card()
{
}

Suit Card::GetSuit() const { return MSuit; }
Rank Card::GetRank() const { return MRank; }

Card & Card::operator=(const Card & rhs)
{
	if (this != &rhs)
	{
		MRank = rhs.MRank;
		MSuit = rhs.MSuit;
	}
	return *this;
}

std::ostream & operator<<(std::ostream &, Card card)
{
	std::string rankStr = "";
	std::string suitStr = "";

	Rank cardRank = card.GetRank();
	Suit cardSuit = card.GetSuit();

	switch (cardRank)
	{
	case Ace:
		rankStr = "Ace";
		break;
	case Two:
		rankStr = "Two";
		break;
	case Three:
		rankStr = "Three";
		break;
	case Four:
		rankStr = "Four";
		break;
	case Five:
		rankStr = "Five";
		break;
	case Six:
		rankStr = "Six";
		break;
	case Seven:
		rankStr = "Seven";
		break;
	case Eight:
		rankStr = "Eight";
		break;
	case Nine:
		rankStr = "Nine";
		break;
	case Ten:
		rankStr = "Ten";
		break;
	case Jack:
		rankStr = "Jack";
		break;
	case Queen:
		rankStr = "Queen";
		break;
	case King:
		rankStr = "King";
		break;
	}
	switch (cardSuit)
	{
	case Spades:
		suitStr = "Spades";
		break;
	case Clubs:
		suitStr = "Clubs";
		break;
	case Diamonds:
		suitStr = "Diamonds";
		break;
	case Hearts:
		suitStr = "Hearts";
		break;
	}

	return std::cout << rankStr << " of " << suitStr;
	//std::cout << rankStr, suitStr;
}
