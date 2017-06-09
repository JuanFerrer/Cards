#include "TarotCardClass.h"

#include <iostream>
#include <string>

namespace tarot
{
	TarotCard::TarotCard(Rank newRank, Suit newSuit)
	{
		MSuit = newSuit;
		MRank = newRank;
		MArcana = Arcana::Minor;
	}



	TarotCard::TarotCard(const TarotCard &rhs)
	{
		SetSuit(rhs.GetSuit());
		SetRank(rhs.GetRank());
		SetTrump(rhs.GetTrump());
		SetArcana(rhs.GetArcana());
	}

	std::string TarotCard::GetSuitString() const
	{
		switch (GetSuit())
		{
		case Suit::Swords:
			return "Swords";
			break;
		case Suit::Wands:
			return "Wands";
			break;
		case Suit::Pentacles:
			return "Pentacles";
			break;
		case Suit::Cups:
			return "Cups";
			break;
		default:
			return "";	// ERROR
			break;
		}
	}

	std::string TarotCard::GetRankString() const
	{
		switch (GetRank())
		{
		case Rank::One:
			return "One";
			break;
		case Rank::Two:
			return "Two";
			break;
		case Rank::Three:
			return "Three";
			break;
		case Rank::Four:
			return "Four";
			break;
		case Rank::Five:
			return "Five";
			break;
		case Rank::Six:
			return "Six";
			break;
		case Rank::Seven:
			return "Seven";
			break;
		case Rank::Eight:
			return "Eight";
			break;
		case Rank::Nine:
			return "Nine";
			break;
		case Rank::Ten:
			return "Ten";
			break;
		case Rank::Jack:
			return "Jack";
			break;
		case Rank::Knight:
			return "Knight";
			break;
		case Rank::Queen:
			return "Queen";
			break;
		case Rank::King:
			return "King";
			break;
		default:
			return "";	// ERROR
			break;
		}
	}


	std::string TarotCard::GetCardName() const
	{
		return std::string();
	}

}
