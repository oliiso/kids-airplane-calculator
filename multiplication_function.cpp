#include "function.h"

int multiplication(char diffchoice) {
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
      numOne = rand() % 2 + 1;
      numTwo = rand() % 2 + 1;
      answer = numOne * numTwo;

      cout << " " << numOne << endl;
      cout << "x" << numTwo << endl;
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
      numOne = rand() % 5 + 1;
      numTwo = rand() % 5 + 1;
      answer = numOne * numTwo;

      cout << " " << numOne << endl;
      cout << "x" << numTwo << endl;
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
      numOne = rand() % 9 + 1;
      numTwo = rand() % 9 + 1;
      answer = numOne * numTwo;

      cout << " " << numOne << endl;
      cout << "x" << numTwo << endl;
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
