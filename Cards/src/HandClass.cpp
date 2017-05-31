#include "HandClass.h"

#include <iostream>
#include <algorithm>
#include <string>
namespace cards
{
	Hand::Hand()
	{
		handValue = 0;
	}

	Hand::~Hand()
	{
	}

	const int Hand::GetHandValue() { return handValue; }
	const size_t Hand::GetHandSize() { return cards.size(); }
	const Card& Hand::GetAt(const int& index) { return cards.at(index); }
	const Card & Hand::GetFirst() { return cards.front(); }
	const Card & Hand::GetLast() { return cards.back(); }


	void Hand::SetHandValue(const int& newValue)
	{
		handValue = newValue;
	}

	//Push_back
	void Hand::IncludeCard(const Card newCard)	//Cannot use reference, since card is popped out of Deck
	{
		cards.push_back(newCard);
	}

	//Sort hand by algorithm
	void Hand::SortHand(bool(*comparerAlg)(Card, Card))
	{
		sort(cards.begin(), cards.end(), comparerAlg);
	}

	//Print hand in console
	void Hand::Print()
	{
		std::cout << "Current hand:\n\n";
		char* conjunction = "";
		for (int i = 0; i < (signed)cards.size(); i++)
		{
			conjunction = cards.at(i).GetType() == CardType::French ? " of " : " de ";
			std::cout << cards.at(i).GetRankString() << conjunction << cards.at(i).GetSuitString() << std::endl;
		}
	}
}
