#ifndef _CARD_H_
#define _CARD_H_

#include <ostream>


///////////////////////////
//                       //
//   French card type    //
//                       //
///////////////////////////


enum Suit { Spades, Clubs, Diamonds, Hearts };
enum Rank { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };


class Card
{
private:
	Suit MSuit;
	Rank MRank;

public:
	Card(Rank, Suit);
	Card(const Card&);
	~Card();

	//Getters
	Suit GetSuit() const;
	Rank GetRank() const;

	//Operators
	Card& operator= (const Card &rhs);
	friend std::ostream& operator<< (std::ostream&, Card card);

	//Member functions
};


#endif // !_CARD_H_
