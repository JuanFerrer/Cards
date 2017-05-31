#ifndef _CARD_H_
#define _CARD_H_

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
	enum class Rank :int { Uno, Dos, Tres, Cuatro, Cinco, Seis, Siete, Ocho, Nueve, Sota, Caballo, Rey };

	class Card : public ICard
	{
	public:
		Card(Rank, Suit);
		Card(const Card&);
		~Card() {}

		//Member functions
		std::string GetSuitString() const;
		std::string GetRankString() const;
	};


}
#endif // !_CARD_H_
