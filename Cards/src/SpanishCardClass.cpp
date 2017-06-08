#include "SpanishCardClass.h"

#include <iostream>
#include <string>

using namespace cards;
namespace spanish
{
	Card::Card(Rank newRank, Suit newSuit)
	{
		SetSuit(newSuit);
		SetRank(newRank);
		SetType(CardType::Spanish);
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
		case Suit::Bastos:
			return "Bastos";
			break;
		case Suit::Oros:
			return "Oros";
			break;
		case Suit::Copas:
			return "Copas";
			break;
		case Suit::Espadas:
			return "Espadas";
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
		case Rank::Uno:
			return "Uno";
			break;
		case Rank::Dos:
			return "Dos";
			break;
		case Rank::Tres:
			return "Tres";
			break;
		case Rank::Cuatro:
			return "Cuatro";
			break;
		case Rank::Cinco:
			return "Cinco";
			break;
		case Rank::Seis:
			return "Seis";
			break;
		case Rank::Siete:
			return "Siete";
			break;
		case Rank::Ocho:
			return "Ocho";
			break;
		case Rank::Nueve:
			return "Nueve";
			break;
		case Rank::Sota:
			return "Sota";
			break;
		case Rank::Caballo:
			return "Caballo";
			break;
		case Rank::Rey:
			return "Rey";
			break;
		default:
			return "";	// ERROR
			break;
		}
	}

}
