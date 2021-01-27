/*
# Name: Mark Griffin
# ID Number: 2340502
# Email: magriffin@chapman.edu
# Course: CPSC298-09
# Assignment: Assignment 2
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int numberArray[10];

  int userInput;
  int nonnegativeCounter = 0; // Used to keep track of how many integers entered are actually nonnegative
  for (int i = 0; i < 10; ++i)
  {
    cout << "Enter a nonnegative integer: " << endl;
    cin >> userInput;

    // If the user entered a nonnegative number, store it in a list, and increment the nonnegativeCounter
    if (userInput >= 0)
    {
      numberArray[nonnegativeCounter] = userInput;
      nonnegativeCounter++;
    }
  }

  cout << "Entered numbers that are nonnegative: " << endl;
  // Outputs the numbers that the user entered which were nonnegative
  for (int i = 0; i < nonnegativeCounter; ++i)
  {
    cout << numberArray[i] << endl;
  }

  return 0;
}
