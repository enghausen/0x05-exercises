#include <iostream>
#include "card.h"

int main(int argc, char** argv) {
  std::cout << "The game presents you with a random card\n";
  std::cout << "Your task is to guess whether the next card is higher or lower\n";
  std::cout << "Type 'h' for higher, 'l' for lower, anything else to exit\n\n";

  Rank current_rank = random_rank();
  Suit current_suit = random_suit();

  std::cout << "Your first card is: " << to_string(current_suit, current_rank) << "\n";

  char guess;

  while (true) {
      std::cout << "Choose higher(h) or lower(l): ";
      std::cin >> guess;

      if (guess != 'h' && guess != 'l') {
          break;
      }

      Rank next_rank = random_rank();
      Suit next_suit = random_suit();

      bool is_higher = compare_cards(current_rank, current_suit, next_rank, next_suit);

      std::cout << "The random generated card was " << to_string(next_suit, next_rank) << "\n";

      if (next_rank == current_rank && next_suit == current_suit) {
          std::cout << "The cards are identical, please choose higher or lower again!\n";
          continue;
      }

      if ((guess == 'h' && is_higher) || (guess == 'l' && !is_higher)) {
          std::cout << "You Won!\n";
      } else {
          std::cout << "You Lost!\n";
      }

      current_rank = next_rank;
      current_suit = next_suit;
  }

  std::cout << "Thanks for playing!\n";
  return 0;
}