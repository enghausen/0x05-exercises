#include <random>
#include <string>

enum Suit {
	SPADES,
	HEARTS,
	CLUBS,
	DIAMONDS
};

enum Rank {	
	TWO = 2,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE,
};

Rank random_rank();
Suit random_suit();
Suit to_suit(char c);
Rank to_rank(int i);
bool compare_cards(Rank, Suit, Rank, Suit);
std::string to_string(Suit, Rank);
