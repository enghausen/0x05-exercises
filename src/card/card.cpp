#include "card.h"
#include <random>

std::random_device rd; // Seed for the random number generator
std::mt19937 mt(rd());
std::uniform_int_distribution<int> suits(SPADES, DIAMONDS);
std::uniform_int_distribution<int> ranks(TWO, ACE);

Rank random_rank() {
    return static_cast<Rank>(ranks(mt));
}

Suit random_suit() {
    return static_cast<Suit>(suits(mt));
}

bool compare_cards(Rank rank1, Suit suit1, Rank rank2, Suit suit2) {
    if (rank2 > rank1)
        return true;
    else if (rank2 < rank1)
        return false;
    else
        return suit2 > suit1;
}

std::string to_string(Suit suit, Rank rank) {
    const std::string rank_names[] = {
        "Invalid", "Invalid", "Two", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King", "Ace"
    };

    const std::string suit_names[] = {
        "Spades", "Hearts", "Clubs", "Diamonds"
    };

    return rank_names[rank] + " of " + suit_names[suit];
}