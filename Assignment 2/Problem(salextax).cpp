/*
# Name: Mark Griffin
# ID Number: 2340502
# Email: magriffin@chapman.edu
# Course: CPSC298-09
# Assignment: Assignment 2
*/

#include <iostream>

using namespace std;

// Adds tax given the tax percentage, to the cost of the item that needs tax added
float addTax(float taxRate, float cost)
{
  float newPrice = cost + ((taxRate / 100) * cost);
  return newPrice;
}

int main(int argc, char **argv)
{
  float userPrice;
  float userTaxPercentage;
  float newPrice;

  cout << "Enter the price: " << endl;
  cin >> userPrice;

  cout << "Enter the tax as a percentage: " << endl;
  cin >> userTaxPercentage;

  cout << "Cost of item before tax: " << userPrice << endl;

  newPrice = addTax(userTaxPercentage, userPrice);

  cout << "Cost of item after tax: " << newPrice << endl;

  return 0;
}
