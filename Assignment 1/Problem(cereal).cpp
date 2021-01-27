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
  const double METRIC_TON_IN_OUNCES = 35273.92;
  double CerealPackageWeightInOunces;
  double CerealPackageWeightInMetricTons;
  int NumberOfBoxes;

  cout << "Enter the weight of a package of cereal in ounces: " << endl;
  cin >> CerealPackageWeightInOunces;

  CerealPackageWeightInMetricTons = CerealPackageWeightInOunces / METRIC_TON_IN_OUNCES;

  cout << "Weight in metric tons: " << CerealPackageWeightInMetricTons << endl;

  NumberOfBoxes = (METRIC_TON_IN_OUNCES / CerealPackageWeightInOunces) + 1;

  cout << "Number of boxes required to yield one metric ton: " << NumberOfBoxes << endl;

  return 0;
}
