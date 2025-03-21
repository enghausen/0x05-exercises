#include <iostream>
#include "pangram.h"

int main(int argc, char** argv) {

// Test strings
std::string case_0 = "A quick brown fox jumps over the lazy dog.";
std::string case_1 = "When zombies arrive quickly, fax judge Pat.";
std::string case_2 = "The five boxing wizards jump quickly.";
std::string case_3 = "Amazingly few discotheques provide jukeboxes.";

std::cout << std::boolalpha;

  // Exercise 0x00 - Setup a test for your implementation
  std::cout << "TEST - Exercise 0x00" << std::endl; 
  std::cout << "case_0: " << pangram(case_0) << std::endl;
  std::cout << "case_1: " << pangram(case_1) << std::endl;
  std::cout << "case_2: " << pangram(case_2) << std::endl;
  std::cout << "case_3: " << pangram(case_3) << std::endl;

  // Exercise 0x01 - Setup a test for your implementation
  std::cout << "TEST - Exercise 0x01" << std::endl;
  std::cout << "case_0: " << pangram(case_0, true) << std::endl;
  std::cout << "case_1: " << pangram(case_1, true) << std::endl;
  std::cout << "case_2: " << pangram(case_2, true) << std::endl;
  std::cout << "case_3: " << pangram(case_3, true) << std::endl;

  return 0;
}

bool pangram(std::string text) {
  bool letters[26] = {false};

  for (char c : text) {
    if ('a' <= c && c <= 'z') 
      letters[c - 'a'] = true;
    else if ('A' <= c && c <= 'Z') 
      letters[c - 'A'] = true;
  }

  for (bool found : letters)
    if (!found) return false;

  return true;
}

bool pangram(std::string text, bool printable) {
  bool letters[26] = {false};

  for (char c : text) {
    if ('a' <= c && c <= 'z')
      letters[c - 'a'] = true;
    else if ('A' <= c && c <= 'Z')
      letters[c - 'A'] = true;
  }

  for (bool found : letters)
    if (!found) return false;

  return true;
}