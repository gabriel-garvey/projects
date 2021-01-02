#include <iostream>
#include <vector>
using namespace std;
// Game functions
void greet() {
  cout << "=============\n"
       << "UFO: The Game\n"
       << "=============\n"
       << "Instructions: save your friend from alien abduction by guessing the letters in a codeword.\n"
       << "You have 7 chances to save your friend. Good luck!\n";
}
//stores and displays Guesses and answers
void display_status(vector<char> incorrect, string answer){
  cout << "\nIncorrect Guesses: ";
//iterates over the vector and outputs its elements
    for(int i = 0; i < incorrect.size(); i++) {
      cout << incorrect[i] << " ";
    }
  cout << "\nCodeword:\n";
//iterates over string and outputs its elements
    for(int a = 0; a < answer.length(); a++) {
      cout << answer[a] << " ";
    }
}
//end of game output
void end_game(string answer, string codeword) {
  if(answer == codeword){
      cout << "Hooray! You saved the person and earned a medal of honor!\n";
    }
    else{
      cout << "oh no! The UFO just flew away with another person!\n";
    }
}

//guess misses animation
void display_misses(int misses) {

  if (misses == 0 || misses == 1) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'     ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /   0   \\      / `-----------'  \n";
    cout << "            /  --|--  \\    /                 \n";
    cout << "           /     |     \\                     \n";
    cout << "          /     / \\     \\                   \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 2) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'     ,-----------.   \n";
    cout << "              /  0  \\        (  Send help! ) \n";
    cout << "             / --|-- \\      / `-----------'  \n";
    cout << "            /    |    \\    /                 \n";
    cout << "           /    / \\    \\                    \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'     ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 3) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'     ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 4) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'      ,-----------.   \n";
    cout << "              /  |  \\         (  Send help! ) \n";
    cout << "             /  / \\  \\      / `-----------' \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 5) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'      ,-----------.   \n";
    cout << "              / / \\ \\        (  Send help! )\n";
    cout << "             /       \\      /  `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }
  else if (misses == 6) {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'     ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /       \\      / `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";

  }

}
