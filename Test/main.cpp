#include "DeckClass.h"
#include "CardClass.h"
#include "HandClass.h"

int main()
{
	Deck* deck = new Deck();
	Hand* hand = new Hand();

	deck->Suffle();
	hand->IncludeCard(deck->DrawCard());

	hand->PrintHand();
	system("pause");
	return 0;
}