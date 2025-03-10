#include "card.h"
#include <random>

std::random_device rd; // Seed for the random number generator
std::mt19937 mt(rd());
std::uniform_int_distribution<int> suits(SPADES, DIAMONDS);
std::uniform_int_distribution<int> ranks(TWO, ACE);
