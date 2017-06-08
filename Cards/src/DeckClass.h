#ifndef _DECK_H_
#define _DECK_H_

#include "include.h"
#include <vector>
#include <random>

namespace cards
{
	class Deck
	{
	private:
		std::vector<Card> cards;

		std::random_device rd;	//Random device
		std::mt19937 mt;		//Mersenne Twister
		bool isShuffled;		// Wheter the deck has been shuffled

	public:
		Deck(CardType);
		Deck(std::vector<Card>);
		~Deck();

		//Getters
		Card GetAt(const int&) const;
		Card GetTop() const;
		Card GetBottom() const;
		size_t GetSize() const;

		//Operators

		//Member functions
		void Suffle(int times = 1);
		Card DrawCard();
		void Print();
		bool IsEmpty() { return cards.empty(); }
		bool IsShuffled() { return isShuffled; }
	};
}

#endif // !_DECK_H_

