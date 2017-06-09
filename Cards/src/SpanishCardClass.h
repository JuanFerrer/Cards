#ifndef _SPANISH_CARD_H_
#define _SPANISH_CARD_H_

#ifndef SPANISH_DEFINED
#define SPANISH_DEFINED
#endif // !SPANISH_DEFINED


#include <ostream>
#include "ICardClass.h"


////////////////////////////
//                        //
//   Spanish card type    //
//                        //
////////////////////////////

namespace cards
{
	enum class Suit : int { Bastos, Oros, Copas, Espadas };
	enum class Rank : int { Uno, Dos, Tres, Cuatro, Cinco, Seis, Siete, Ocho, Nueve, Sota, Caballo, Rey };
}
namespace spanish
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

using namespace spanish;
#endif // !_SPANISH_CARD_H_
