/*
# Name: Mark Griffin
# ID Number: 2340502
# Email: magriffin@chapman.edu
# Course: CPSC298-07
# Assignment: Assignment 1
*/

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int MaxRoomCapacity;
  int NumberOfPeople;

  cout << "Enter the maximum room capacity for the meeting room:" << endl;
  cin >> MaxRoomCapacity;

  cout << "Enter the number of people to attend the meeting:" << endl;
  cin >> NumberOfPeople;

  if (NumberOfPeople <= MaxRoomCapacity)
  {
    cout << "The meeting can legally be held and " << MaxRoomCapacity - NumberOfPeople
      << " additional people can attend." << endl;
  }
  else
  {
    cout << "The meeting cannot legally be held due to fire regulations and " <<
      NumberOfPeople - MaxRoomCapacity << " people must be excluded to meet regulations."
      << endl;
  }

  return 0;
}
