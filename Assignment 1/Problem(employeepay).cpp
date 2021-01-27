/*
# Name: Mark Griffin
# ID Number: 2340502
# Email: magriffin@chapman.edu
# Course: CPSC298-07
# Assignment: Assignment 1
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char **argv)
{
  const double REGULAR_PAY_RATE = 16.00;
  const double OVERTIME_PAY_RATE = 24.00;
  const double SOCIAL_SECURITY_TAX_RATE = 0.06;
  const double FEDERAL_INCOME_TAX_RATE = 0.14;
  const double STATE_INCOME_TAX_RATE = 0.05;
  const double MEDICAL_INSURANCE_COST = 10.00;
  int HoursWorked;
  double GrossPay;
  double SocialSecurityWithhold;
  double FederalIncomeWithhold;
  double StateIncomeWithhold;
  double NetPay;

  cout << "Enter the number of hours worked in a week:" << endl;
  cin >> HoursWorked;

  if (HoursWorked > 40)
  {
    GrossPay = (40 * REGULAR_PAY_RATE) + ((HoursWorked - 40) * OVERTIME_PAY_RATE);
  }
  else
  {
    GrossPay = HoursWorked * REGULAR_PAY_RATE;
  }

  SocialSecurityWithhold = GrossPay * SOCIAL_SECURITY_TAX_RATE;
  FederalIncomeWithhold = GrossPay * FEDERAL_INCOME_TAX_RATE;
  StateIncomeWithhold = GrossPay * STATE_INCOME_TAX_RATE;
  NetPay = GrossPay - (SocialSecurityWithhold + FederalIncomeWithhold +
    StateIncomeWithhold + MEDICAL_INSURANCE_COST);

  cout << fixed << setprecision (2) << "Gross Pay: " << GrossPay << endl;
  cout << "Social Security Withholding: " << SocialSecurityWithhold << endl;
  cout << "Federal Income Withholding: " << FederalIncomeWithhold << endl;
  cout << "State Income Withholding: " << StateIncomeWithhold << endl;
  cout << "Medical Insurance Withholding: " << MEDICAL_INSURANCE_COST << endl;
  cout << "Net Pay: " << NetPay << endl;

  return 0;
}
