#ifndef _ICARD_H_
#define _ICARD_H_

#include <ostream>

namespace cards
{
	enum CardType { French, Spanish };
	enum class Suit : int;
	enum class Rank : int;

	class ICard
	{
	private:
		Suit MSuit;
		Rank MRank;
		CardType MType;

	public:
		virtual ~ICard() {};

		//Getters
		Suit GetSuit() const { return MSuit; }
		Rank GetRank() const { return MRank; }
		CardType GetType() const { return MType; }
		void SetSuit(const Suit& suit) { MSuit = suit; }
		void SetRank(const Rank& rank) { MRank = rank; }
		void SetType(const CardType& type) { MType = type; }

		//Operators
		virtual ICard& operator= (const ICard& rhs)
		{
			if (this != &rhs)
			{
				MSuit = rhs.GetSuit();
				MRank = rhs.GetRank();
			}
			return *this;
		}

		//Member functions
		virtual std::string GetSuitString() const = 0;
		virtual std::string GetRankString() const = 0;
		virtual std::string GetCardName() const
		{
			char* preposition = MType == CardType::French ? " of " : " de ";
			return GetRankString() + preposition + GetSuitString();
		}
	};
}

#endif // !_ICARD_H_

