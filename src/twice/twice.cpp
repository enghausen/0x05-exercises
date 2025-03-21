#include <iostream>
#include <string>
#include "twice.h"

int main() {
  
  std::cout << letter_seen_twice("welcome to the wonderful world of software engineering") << std::endl;
  std::cout << letter_seen_twice("uncopyrightable") << std::endl;
  std::cout << letter_seen_twice("testtest") << std::endl;
  std::cout << letter_seen_twice("a quick brown fox jumps over the lazy dog") << std::endl;
  std::cout << letter_seen_twice("when zombies arrive quickly fax judge pat") << std::endl;
  std::cout << letter_seen_twice("the five boxing wizards jump quickly") << std::endl;
  std::cout << letter_seen_twice("amazingly few discotheques provide jukeboxes") << std::endl;

  return 0;
}

// Exercise 0x00 && Exercise 0x01
std::string letter_seen_twice(std::string text) {
  // Hint: You'll probably want a nested for-loop (one for the current character and one for the characters you've seen before)
  for (int i = 0; i < text.length(); i++) {
    if (text[i] >= 'a' && text[i] <= 'z')
      for (int j = 0; j < i; j++) {
        if (text[i] == text[j]) {
          return std::string(1, text[i]) + " found at indices " + std::to_string(j) + " and " + std::to_string(i);
      }
    }
  }
  return text + " contains no duplicate characters";
}