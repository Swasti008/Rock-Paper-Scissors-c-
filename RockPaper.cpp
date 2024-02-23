#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    string choices[] = {"rock", "paper", "scissors"};
    string user;
    string computer;
    
    //Generating random index for computer choice.
    int computerIndex = rand() % 3;

    cout << "Enter your choice (write rock🪨, paper📃, or scissors✂️): ";
    cin >> user;

    computer = choices[computerIndex];
    cout << "Computer choose: " << computer << endl;

    //Draw
    if (user == computer) {
        cout << "It's a tie!\n";
    //Win
    } else if ((user == "rock" && computer == "scissors") ||
               (user == "paper" && computer == "rock") ||
               (user == "scissors" && computer== "paper")) {
        cout << "You win!\n";
    //Computer wins if user didn't win
    } else {
        cout << "Computer wins!\n";
    }

    return 0;
}
