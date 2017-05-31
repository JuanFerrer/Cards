#include "DeckClass.h"

#include <algorithm>
#include <iostream>

namespace cards
{
	//Building standard unshuffled deck
	Deck::Deck()
	{
		for (int j = 0; j < 4; j++)
		{
			for (int i = 0; i < 13; i++)
			{
				cards.push_back(Card(static_cast<Rank>(i), static_cast<Suit>(j)));
			}
		}
		mt.seed(rd());
	}

	//Deck from previously made vector of cards
	Deck::Deck(const std::vector<Card> givenCards)
	{
		for (int i = 0; i < (signed)givenCards.size(); i++)
		{
			cards.push_back(givenCards.at(i));
		}
	}

	Deck::~Deck()
	{
	}

	Card Deck::GetAt(const int& index) const { return cards.at(index); }		//Copy card. Does not draw it
	Card Deck::GetTop() const { return cards.back(); }							//Copy card. Does not draw it
	Card Deck::GetBottom() const { return cards.front(); }						//Copy card. Does not draw it

	size_t Deck::GetSize() const { return cards.size(); }

	//Suffle cards remaining in deck
	void Deck::Suffle(int times)
	{
		for (int i = 0; i < times; i++)
		{
			std::shuffle(cards.begin(), cards.end(), mt);
		}
		isShuffled = true;
	}

	//Return copy of card at the top
	//Returns error if deck is empty
	Card Deck::DrawCard()
	{
		if (!cards.empty())
		{
			Card t = cards.back();
			cards.pop_back();
			return t;
		}
		throw std::exception("Deck is empty");
	}

	//Print deck in console
	void Deck::Print()
	{
		std::cout << "Cards left: " << cards.size() << std::endl;
	}
}
