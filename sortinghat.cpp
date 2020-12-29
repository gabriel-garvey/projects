#include <iostream>

int main() {
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  
  int answer1;
  int answer2;
  int answer3;
  int answer4;

  std::cout << "The Sorting Hat Quiz!\n";
  std::cout << "Enter coresponding number for answer.\n";
  std::cout << "Q1) When I'm dead, I want people to remember me as:\n";
  std::cout << "  1) The Good\n";
  std::cout << "  2) The Great\n";
  std::cout << "  3) The Wise\n";
  std::cout << "  4) The Bold\n";
  std::cin >> answer1;
  switch(answer1){
    case 1:
      hufflepuff += 1;
      break;
    case 2:
      slytherin += 1;
      break;
    case 3:
      ravenclaw += 1;
      break;
    case 4:
      gryffindor += 1;
      break;
    default:
      std::cout << "Answer must be between 1 and 4.";
      break;
  }

  std::cout << "Q2) Dawn or dusk?\n";
  std::cout << "  1) Dawn\n";
  std::cout << "  2) Dusk\n";
  std::cin >> answer2;
  switch(answer2){
    case 1:
      gryffindor++ && ravenclaw++;
      break;
    case 2:
      hufflepuff++ && slytherin++;
      break;
    default:
      std::cout << "Must enter 1 or 2.";
      break;
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n";
  std::cout << "  1) The violin\n";
  std::cout << "  2) The trumpet\n";
  std::cout << "  3) The piano\n";
  std::cout << "  4) The drum\n";
  std::cin >> answer3;
  switch(answer3){
    case 1:
      slytherin++;
      break;
    case 2:
      hufflepuff++;
      break;
    case 3:
      ravenclaw++;
      break;
    case 4:
      gryffindor++;
      break;
    default:
      std::cout << "invalid input\n";
      break;
  }

  std::cout << "Q4) Which road tempts you most?\n";
  std::cout << "  1) The wide, sunny grassy lane\n";
  std::cout << "  2) The narrow, dark, lantern-lit alley\n";
  std::cout << "  3) The twisting, leaf-strewn path through woods\n";
  std::cout << "  4) The cobbled street lined with ancient buildings\n";
  std::cin >> answer4;
  switch(answer4){
    case 1:
      hufflepuff++;
      break;
    case 2:
      slytherin++;
      break;
    case 3:
      gryffindor++;
      break;
    case 4:
      ravenclaw++;
      break;
    default:
      std::cout << "Must be between 1 and 4\n";
      break;
  }
  
  std::cout << "\nCongrats on being sorted into... \n";

  int max = 0;
  std::string house;

  if (gryffindor > max)
  {

    max = gryffindor;
    house = "Gryffindor";

  }

  if (hufflepuff > max)
  {

    max = hufflepuff;
    house = "Hufflepuff";

  }

  if (ravenclaw > max)
  {

    max = ravenclaw;
    house = "Ravenclaw";

  }

  if (slytherin > max)
  {

    max = slytherin;
    house = "Slytherin";

  }

  std::cout << house << "!\n";

  return 0;

}
