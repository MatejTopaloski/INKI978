#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  srand(time(0)); // Seed the random number generator

  string homeTeam, opponentTeam;
  int homePlayerScore = 0;
  int opponentPlayerScore = 0;

  cout << "Choose home team: ";
  cin >> homeTeam;
  cout << "Choose the opposing team: ";
  cin >> opponentTeam;
  cout << endl;
label1:
  for (int round = 1; round <= 1; round++) {
    cout << "HOME TEAM TURN" << "\n";
    for (int kick = 1; kick <= 5; kick++) {
      int goalkeeperPosition = rand() % 3;
      int playerPosition, kickPower;
      cout << endl;
      cout << "\nHome Team Kick " << kick << "\n";
      cout << "Choose the direction of the kick (0 for left, 1 for middle, 2 for right): ";
      cin >> playerPosition;
      cout << "Choose the power of the kick (1-10): ";
      cin >> kickPower;
      if (playerPosition == goalkeeperPosition) {
        cout << "The goalkeeper blocks the shot!\n";
        cout << endl;
      }
      else {
        homePlayerScore++;
        cout << "GOAL!\n";
        cout << endl;
      }
    }
    cout << "OPPONENT TEAM TURN" << "\n";
    for (int kick = 1; kick <= 5; kick++) {
      int goalkeeperPosition = rand() % 3;
      int playerPosition, kickPower;
      cout << endl;
      cout << "\nOpponent Team Kick " << kick << "\n";
      cout << "Choose the direction of the kick (0 for left, 1 for middle, 2 for right): ";
      cin >> playerPosition;
      cout << "Choose the power of the kick (1-10): ";
      cin >> kickPower;
      if (playerPosition == goalkeeperPosition) {
        cout << "The goalkeeper blocks the shot!\n";
      }
      else {
        opponentPlayerScore++;
        cout << "GOAL!\n";
      }
    }
  }

  cout << "\nGame over! Final score:\n";
  cout << homeTeam << "  " << homePlayerScore << "  :  " << opponentPlayerScore << "  " << opponentTeam << "\n";
  if (homePlayerScore>opponentPlayerScore){
    cout << homeTeam << " WON!" << endl;
  }else if(opponentPlayerScore>homePlayerScore){
    cout << opponentTeam << " WON!" << endl;
  }else if(homePlayerScore==opponentPlayerScore){
    cout << "DRAW GAME!" << endl;
    cout << "You will shoot penalties again!" << endl;
    cout << endl;
    goto label1;
  }

  return 0;
}
