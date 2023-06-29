#include "function.h"

int addition(char diffchoice) {
  srand(time(NULL));
  int numOne;
  int numTwo;
  int answer;
  int userAnswer;
  int points = 0;
  bool incorrect = false;
  switch (diffchoice) {
  case 'E':
    do {
      numOne = rand() % 10 + 1;
      numTwo = rand() % 10 + 1;
      answer = numOne + numTwo;

      cout << " " << numOne << endl;
      cout << "+" << numTwo << endl;
      cout << "----" << endl;
      cin >> userAnswer;

      if (answer == userAnswer) {
        points += 1;
        cout << "You got it right!!" << endl;
      } else {
        incorrect = true;
        cout << "That's incorrect!" << endl;
      }
    } while (incorrect != true);
    break;
  case 'M':
    do {
      numOne = rand() % 24 + 1;
      numTwo = rand() % 24 + 1;
      answer = numOne + numTwo;

      cout << " " << numOne << endl;
      cout << "+" << numTwo << endl;
      cout << "----" << endl;
      cin >> userAnswer;

      if (answer == userAnswer) {
        points += 1;
        cout << "You got it right!!" << endl;
      } else {
        incorrect = true;
        cout << "That's incorrect!" << endl;
      }
    } while (incorrect != true);
    break;
  case 'H':
    do {
      numOne = rand() % 49 + 1;
      numTwo = rand() % 49 + 1;
      answer = numOne + numTwo;

      cout << " " << numOne << endl;
      cout << "+" << numTwo << endl;
      cout << "----" << endl;
      cin >> userAnswer;

      if (answer == userAnswer) {
        points += 1;
        cout << "You got it right!!" << endl;
      } else {
        incorrect = true;
        cout << "That's incorrect!" << endl;
      }
    } while (incorrect != true);
    break;
  }
  return points;
}