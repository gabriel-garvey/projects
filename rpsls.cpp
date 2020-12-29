/*Rock, Paper, Scissors, Lizard, Spock

    Scissors cuts Paper.
    Paper covers Rock.
    Rock crushes Lizard.
    Lizard poisons Spock.
    Spock smashes Scissors.
    Scissors decapitate Lizard.
    Lizard eats Paper.
    Paper disproves Spock.
    Spock vaporizes Rock.
    (and as it always has) Rock crushes Scissors.
*/

#include <iostream>
#include <stdlib.h>

int main() {
  srand (time(NULL));
 
  int computer = rand() % 5 + 1;
 
  int user = 0;

  std::cout << "Rock, Paper, Scissors, Lizard, Spock!\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";
  std::cout << "4) Lizard\n";
  std::cout << "5) Spock\n";

  std::cout << "Shoot!\n";

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cin >> user;
  std::cout << "Computer chose: " << computer << "\n";

  if(user == (scissors || lizard) && computer == paper){
    std::cout << "You win\n";
  }
  else if(user == (paper || spock) && computer == rock){
    std::cout << "You win\n";
  } 
  else if(user == (rock || scissors) && computer == lizard){
    std::cout << "You win\n";
  }
  else if(user == (spock || rock) && computer == scissors){
    std::cout << "You win\n";
  }
  else if(user == (paper || lizard) && computer == spock){
    std::cout << "You win\n";
  }
  else{
    std::cout << "You LOSE UGLY!\n";
  }
}
