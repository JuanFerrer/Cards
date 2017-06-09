#ifndef _FRENCH_CARD_H_
#define _FRENCH_CARD_H_

#ifndef FRENCH_DEFINED
#define FRENCH_DEFINED
#endif // !FRENCH_DEFINED

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
	enum class Rank : int { Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King };
}
namespace french
{
	class Card : public cards::ICard
	{
	public:
		Card(cards::Rank, cards::Suit);
		Card(const Card&);
		~Card() {}

		//Member functions
		std::string GetSuitString() const;
		std::string GetRankString() const;
	};
}

using namespace french;
#endif // !_FRENCH_CARD_H_
