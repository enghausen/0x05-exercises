# 0x051 Exercises – Twice
Write a program that returns the first letter to appear twice in a string composed with an alphabet containing only lowercase english letters (`a`-`z` or `0x61`-`0x7A` in ASCII).

## Exercise 0x052 – Twice, continued
What is the string contains no repeats?:
- `Uncopyrightable` (adjective): Not able to be protected by copyright
- `Dermatoglyphics` (noun): The study of skin patterns/markings, such as fingerprints

Modify the program from Exercise 0x51 to handle the case, where there are no repeat characters in the input string.

## Exercise 0x053 – Twice, continued, again
Modify the program from Exercise 0x052, so it prints the positions (indices) of the letter to the console.

Here are some example output:
- `Welcome to the wonderful world of software engineering` produces the output
`'e', found at indices [1, 6]`
- `Uncopyrightable` produces the output `'Uncopyrightable' contains no duplicate characters`

# Exercise 0x054 – Pangram
A pangram is a string, which contains at least one instance of each character in a given
alphabet.

Here are some test data:
- `A quick brown fox jumps over the lazy dog.`
- `When zombies arrive quickly, fax judge Pat.`
- `The five boxing wizards jump quickly.`
- `Amazingly few discotheques provide jukeboxes.`

## Exercise 0x055 – Pangram, continued

Modify the program from Exercise 0x054 to only account for printable characters, excluding numbers, special characters and whitespaces.

_Hint Is it possible to calculate a character using an offset and an upper and a lower bound (check ASCII.md)?_

## Exercise 0x56 Card game
Implement a card game where the user is tasked with guessing whether the next card has a higher or lower value than the previous card.

The game flow shall be as described:
1. Select a card at random
2. Display card to user
3. Prompt user for guess ('h' for higher, 'l' for lower)
4. Check input against the user selection
5. Print result
6. Go back to step one

Example output
```console
$ ./card_game.out
The game presents you with a random card
Your task is to guess whether the next card is higher og lower
Type 'h' for higher, 'l' for lower, anything else to exit
Your first card is: 4 of Diamonds
Choose higher(h) or lower(l): h
You Won, the random generated card were Jack of Hearts
Choose higher(h) or lower(l): l
You Lost, the random generated card were Jack of Clubs
Choose higher(h) or lower(l): h
You lost, the random generated card were 6 of Diamonds
Choose higher(h) or lower(l): q
$
```

Here is a proposal for a header file to get you started:

```cpp
Rank random_rank();
Suit random_suit();
Suit to_suit(char);
Rank to_rank(int);
bool compare_cards(Rank, Suit, Rank, Suit);
void print(string, Rank, Suit);
string to_string(Rank);
string to_string(Suit);
```

What would be good candidates for enumerations?

The following code is provided to generate uniformly distributed integers for the cards.
```cpp
#include <random>

random_device rd;
mt19937 mt(rd());
uniform_int_distribution<int> suits(SPADES, DIAMONDS);
uniform_int_distribution<int> ranks(TWO, ACE);
```
Let's ask ChatGPT about this code snippet:
> Overall, this code sets up a random number generator (`mt19937`) seeded with a nondeterministic value obtained from `random_device`. It then initializes two uniform integer distribution objects (`suits` and `ranks`) for generating random integers representing suits and ranks of playing cards, respectively. 
>
> _– ChatGPT 4o_

## Randomness (OPTIONAL)
Randomness is an interesting field within computer science. How can something as
predictable as a machine produce truly random numbers? The numbers generated by
our machines are not truly random, but pseudo random. If you want to deep dive into the
wonderful world of randomness. Start out from https://www.random.org/randomness/ and
explore the web from there. It is truly fasinating!

As mentioned, this is OPTIONAL, so do it out of class if you're curious (you should be, it
involves thunderstorms and radioactive decay :D)