#ifndef _TAROT_CARD_H_
#define _TAROT_CARD_H_

#include <ostream>
#include <memory>


//////////////////////////
//                      //
//   Tarot card type    //
//                      //
//////////////////////////

namespace tarot
{
	enum class Suit : int { Swords, Wands, Pentacles, Cups };
	enum class Rank : int { One, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Knight, Queen, King };
	enum class Trump : int {
		Magician, HighPriestess, Empress, Emperor, Hierophant, Lovers, Chariot, Strength, Hermit,
		WheelOfFortune, Justice, HangedMan, Death, Tmperance, Devil, Tower, Star, Moon, Sun, Judgement, World, Fool
	};
	enum class Arcana : int { Major, Minor };

	class TarotCard
	{
	private:
		Suit MSuit;
		Rank MRank;
		Arcana MArcana;
		Trump MTrump;

		std::string GetSuitString() const;
		std::string GetRankString() const;
		std::string GetTrumpString() const;
		std::string GetCardName() const;

	public:
		TarotCard(Rank, Suit);
		TarotCard(const TarotCard&);
		~TarotCard() {}

		//Getters
		Suit GetSuit() const { return MSuit; }
		Rank GetRank() const { return MRank; }
		Trump GetTrump() const { return MTrump; }
		Arcana GetArcana() const { return MArcana; }
		void SetSuit(Suit suit) { MSuit = suit; }
		void SetRank(Rank rank) { MRank = rank; }
		void SetTrump(Trump trump) { MTrump = trump; }
		void SetArcana(Arcana arcana) { MArcana = arcana; }

		//Operators
		TarotCard& operator= (const TarotCard& rhs)
		{
			if (this != &rhs)
			{
				MSuit = rhs.GetSuit();
				MRank = rhs.GetRank();
			}
			return *this;
		}
	};
}
#endif // !_TAROT_CARD_H_
