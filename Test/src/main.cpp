#include "./src/include.h"
#include "./src/DeckClass.h"
#include "./src/HandClass.h"

#include <iostream>

using namespace std;
using namespace cards;

int main()
{
	Deck* deck = new Deck(CardType::Spanish);
	Hand* hand = new Hand();

	char optionSelected;

	do
	{
		system("cls");
		deck->Print();
		hand->Print();
		cout << "Do you want to draw, suffle or quit? (d/s/q)";
		cin >> optionSelected;
		while (optionSelected != 'd' &&
			   optionSelected != 's' &&
			   optionSelected != 'q')
		{
			cout << "Select a valid option (d/s/q)";
			cin >> optionSelected;
		}
		if (optionSelected == 's')
		{
			deck->Suffle();
		}
		else
		{
			hand->IncludeCard(deck->DrawCard());
		}\
	} while (optionSelected != 'q');
	return 0;
}