#ifndef _ICARD_H_
#define _ICARD_H_

#include <ostream>

class ICard
{

private:
	Suit MSuit;
	Rank MRank;

public:
	virtual enum Suit;
	virtual enum Rank;

	virtual ~ICard() {};

	//Getters
	virtual Suit GetSuit() const = 0;
	virtual Rank GetRank() const = 0;
	virtual void SetSuit() const = 0;
	virtual void SetRank() const = 0;

	//Operators
	virtual ICard& operator= (const ICard &rhs) = 0;
	virtual friend std::ostream& operator<< (std::ostream&, ICard* card) = 0;

	//Member functions
};


#endif // !_ICARD_H_

