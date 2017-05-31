#ifndef _ICARD_H_
#define _ICARD_H_

#include <ostream>

class ICard
{

	virtual enum Suit;
	virtual enum Rank;

private:
	Suit MSuit;
	Rank MRank;

public:
	virtual ~ICard() {};

	//Getters
	virtual Suit GetSuit() const = 0;
	virtual Rank GetRank() const = 0;

	//Operators
	virtual ICard& operator= (const ICard &rhs) = 0;
	virtual friend std::ostream& operator<< (std::ostream&, ICard* card) = 0;

	//Member functions
};


#endif // !_ICARD_H_

