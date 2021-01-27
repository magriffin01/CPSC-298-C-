/*
# Name: Mark Griffin
# ID Number: 2340502
# Email: magriffin@chapman.edu
# Course: CPSC298-09
# Assignment: Assignment 2
*/

#include <iostream>

using namespace std;

// Zeros both numbers inputted
void zeroBoth(int& userNum1, int& userNum2)
{
  userNum1 = 0;
  userNum2 = 0;
}

int main(int argc, char **argv)
{
  int userNumber1;
  int userNumber2;

  cout << "Enter a number: " << endl;
  cin >> userNumber1;
  cout << "Enter another number: " << endl;
  cin >> userNumber2;

  cout << "Numbers entered: " << userNumber1 << " and " << userNumber2 << endl;

  zeroBoth(userNumber1, userNumber2);

  cout << "Your numbers zeroed: " << userNumber1 << " and " << userNumber2 << endl;

  return 0;
}
