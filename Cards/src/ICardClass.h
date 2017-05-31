#ifndef _ICARD_H_
#define _ICARD_H_

#include <ostream>

namespace cards
{
	enum class Suit : int;
	enum class Rank : int;

	class ICard
	{
	private:
		Suit MSuit;
		Rank MRank;

	public:
		virtual ~ICard() {};

		//Getters
		virtual Suit GetSuit() const { return MSuit; };
		virtual Rank GetRank() const { return MRank; };
		virtual void SetSuit(const Suit& suit) { MSuit = suit; }
		virtual void SetRank(const Rank& rank) { MRank = rank; };

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
	};
}

#endif // !_ICARD_H_

