// 9.27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "DeckOfCards.h"
#include "Player.h"
#include "Dealer.h"

int main()
{
	size_t nRounds;
    std::cout << "Hello Player, how many rounds would you like to play?\n";
	std::cin >> nRounds;

	size_t i = 0;
	size_t computerScore = 0;
	size_t playerScore = 0;

	while (i < nRounds)
	{
		std::cout << "-----------Round "<< i+1 << " start---------------\n";
		DeckOfCards deck;

		Player player(deck);
		Dealer dealer(deck);

		dealer.upgradeCurrentHand();
		player.upgradeCurrentHand();

		if (dealer.getCurrentHand() < player.getCurrentHand())
		{
			std::cout << "The player wins\n";
			playerScore++;
		}
		else if (dealer.getCurrentHand() == player.getCurrentHand())
		{
			std::cout << "It's a tie\n";
		}
		else
		{
			std::cout << "The computer wins\n";
			computerScore++;
		}

		std::cout << "Computer vs. player: " << computerScore << " vs. " << playerScore << std::endl;
		dealer.getCurrentHand().print();
		std::cout << "----------------------------\n";
		player.getCurrentHand().print();
	
		std::cout << "-----------Round " << i+1 << " ends----------------\n";
		i++;
	}

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
