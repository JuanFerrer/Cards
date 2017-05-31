#ifndef _CARD_H_
#define _CARD_H_

#include <ostream>
#include "ICardClass.h"


///////////////////////////
//                       //
//   French card type    //
//                       //
///////////////////////////

class Card : public ICard
{
private:

public:
	enum Suit { Spades, Clubs, Diamonds, Hearts };
	enum Rank { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };

	Card(Rank, Suit);
	Card(const Card&);
	~Card();

	//Getters
	Suit GetSuit() const;
	Rank GetRank() const;
	void SetSuit() const;
	void SetRank() const;

	//Operators
	Card& operator= (const Card &rhs);
	friend std::ostream& operator<< (std::ostream&, ICard* card);

	//Member functions
};


#endif // !_CARD_H_
