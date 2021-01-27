/*
# Name: Mark Griffin
# ID Number: 2340502
# Email: magriffin@chapman.edu
# Course: CPSC298-09
# Assignment: Assignment 2
*/

#include <iostream>
#include <string>

using namespace std;

float const INCHES_PER_FOOT = 12.0;
float const CENTIMERERS_PER_METER = 100.0;
float const METERS_PER_FOOT = 0.3048;

// Prompts user to continue converting, or quiting
void promptUserForContinue(string& userInput)
{
  cout << "Would you like to do a conversion, or exit the program? (Type \"exit\" to quit. Enter anything else to do a conversion.)" << endl;
  cin >> userInput;
}

// Prompts the user for their input, and gets that input
void getInput(int& feet, int& inches)
{
  cout << "Enter a length in feet and inches, separated by a space: " << endl;
  cin >> feet;
  cin >> inches;
}

// Converts the user provided feet and inches to meters and returns the meters
float convertFeetAndInchesToMeters(int feet, int inches)
{
  float totalFeet = feet + (inches / INCHES_PER_FOOT);

  return totalFeet * METERS_PER_FOOT;
}

// Converts from meters to centimeters
float convertMetersToCentimeters(float totalMeters)
{
  return totalMeters * CENTIMERERS_PER_METER;
}

// Prints the conversion
void printConversion(float meters, float centimeters)
{
  cout << "The length is: " << meters << " in meters and " << centimeters << " in centimeters." << endl;
}

int main(int argc, char **argv)
{
  int userFeet;
  int userInches;
  float meters;
  float centimeters;
  string userInput;

  promptUserForContinue(userInput);

  // Enter/continue the loop while the user does not enter "Exit" or "exit"
  while((userInput != "exit") && (userInput != "Exit"))
  {
    getInput(userFeet, userInches);
    meters = convertFeetAndInchesToMeters(userFeet, userInches);
    centimeters = convertMetersToCentimeters(meters);
    printConversion(meters, centimeters);
    promptUserForContinue(userInput);
  }

  return 0;
}
