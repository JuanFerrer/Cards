#include "FrenchCardClass.h"

#include <iostream>
#include <string>

using namespace cards;
namespace french
{
	Card::Card(Rank newRank, Suit newSuit)
	{
		SetSuit(newSuit);
		SetRank(newRank);
		SetType(CardType::French);
	}

	Card::Card(const Card &rhs)
	{
		SetSuit(rhs.GetSuit());
		SetRank(rhs.GetRank());
		SetType(rhs.GetType());
	}

	std::string Card::GetSuitString() const
	{
		switch (GetSuit())
		{
		case Suit::Spades:
			return "Spades";
			break;
		case Suit::Clubs:
			return "Clubs";
			break;
		case Suit::Diamonds:
			return "Diamonds";
			break;
		case Suit::Hearts:
			return "Hearts";
			break;
		default:
			return "";	// ERROR
			break;
		}
	}

	std::string Card::GetRankString() const
	{
		switch (GetRank())
		{
		case Rank::Ace:
			return "Ace";
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

}
