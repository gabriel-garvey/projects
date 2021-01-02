#include <iostream>
#include "ufo_functions.hpp"
using namespace std;

int main() {
//game intro
  greet();
//game codeword
  string codeword = "codecademy";
//game answer
  string answer = "----------";
//wrong guess counter
  int misses = 0;
//storing incorrect Guesses
  vector<char> incorrect;
//
  bool guess = false;
//answer input
  char letter;
//game logic
  while(answer != codeword && misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);
    cout << "Please enter your guess: \n";
    cin >> letter;
//iterates over string and if input matches a element in the string, replace element in answer with input amd makes guess true
    for(int c = 0; c < codeword.length(); c++){
      if(letter == codeword[c]){
        answer[c] = letter;
        guess = true;
      }
    }
//outputs response based on guess being true or false and if it is false it also adds the input to the end of the incorrect guesses vector
    if(guess) {
      cout << "Correct!\n";
    } else{
      cout << "Incorrect! the tractor beam pull the person in further.\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }
  end_game(answer, codeword);

}
