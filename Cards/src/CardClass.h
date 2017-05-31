#ifndef _CARD_H_
#define _CARD_H_

#include <ostream>
#include "ICardClass.h"


///////////////////////////
//                       //
//   French card type    //
//                       //
///////////////////////////

namespace cards
{
	enum class Suit : int { Spades, Clubs, Diamonds, Hearts };
	enum class Rank :int { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };

	class Card : public ICard
	{
	public:
		Card(Rank, Suit);
		Card(const Card&);
		~Card();

		//Member functions
		std::string GetSuitString() const;
		std::string GetRankString() const;
	};


}
#endif // !_CARD_H_
