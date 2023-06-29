#include <iostream>
using namespace std;
#include "function.h"

void menu() {
  string userName;
  int userScore;
  int menuChoice;
  int mathChoice;
  char diffChoice;
  cout << "---------" << endl;
  cout << "Welcome to the Airplane Game!" << endl;
  cout << "---------" << endl;
  cout << "Enter your name: ";
  getline(cin,userName);
  while (menuChoice != 4) {
    cout << "" << endl;
    cout << "MAIN MENU" << endl;
    cout << "---------" << endl;
    cout << "    ______________/ |" << endl;
    cout << "  /_]  ooooooooooo  |" << endl;
    cout << " |______---------___|" << endl;
    cout << "" << endl;
    cout << "1. PLAY GAME" << endl;
    cout << "2. HIGH SCORES" << endl;
    cout << "3. HOW TO PLAY" << endl;
    cout << "4. CLOSE PROGRAM" << endl;
    cin >> menuChoice;

    if (menuChoice == 1) {
      cout << "" << endl;
      cout << "SELECT ARITHMETIC" << endl;
      cout << "---------" << endl;
      cout << "" << endl;
      cout << "1. ADDITION" << endl;
      cout << "2. SUBTRACTION" << endl;
      cout << "3. MULTIPLICATION" << endl;
      cin >> mathChoice;
      cout << "" << endl;
      cout << "SELECT DIFFICULTY" << endl;
      cout << "---------" << endl;
      cout << "(E)ASY" << endl;
      cout << "(M)EDIUM" << endl;
      cout << "(H)ARD" << endl;
      cin >> diffChoice;
      if (mathChoice == 1) {
          userScore = addition(diffChoice);
          cout << "You got " << userScore << " points!" << endl;
      } else if (mathChoice == 2) {
          userScore = subtraction(diffChoice);
          cout << "You got " << userScore << " points!" << endl;
      } else if (mathChoice == 3) {
          userScore = multiplication(diffChoice);
          cout << "You got " << userScore << " points!" << endl;
      }

    }

    if (menuChoice == 2) {
      cout << "" << endl;
      cout << "HIGH SCORE NOT WORKING YET" << endl;
      cout << "---------" << endl;
    }

    if (menuChoice == 3) {
      cout << "" << endl;
      cout << "HOW FAR CAN YOU FLY?" << endl;
      cout << "---------" << endl;
      cout << "Solve Math Problems to fuel your plane" << endl;
      cout << "Plane stops flying when you get a MISS on a problem" << endl;
      cout << "EASY - Math Problems with digits from 0-10 (except multiplication: 0-3)" << endl;
      cout << "MEDIUM - Math Problems with digits from 0-25 (except multiplication: 0-6)" << endl;
      cout << "HARD - Math Problems with digits from 0-50(except multiplication: 0-10)" << endl;
    }
  }
  cout << "---------" << endl;
  cout << "THANK YOU FOR PLAYING OUR GAME!" << endl;
  cout << "---------" << endl;
}
