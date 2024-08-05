//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// Prototype for the getPayment function void getPayment (int prin, double monthRate, int months, double &monthPay);

 int main() {
    int carPrice = 30000;
    int rebate = 2000;
    double creditRate = 0.05;
    double dealerRate = 0.06;
    int term = 5;

    double creditPayment = 0.0;
    double dealerPayment = 0.0;

 
 
    getPayment(carPrice - dealerRate / 12, term * 12, dealerPayment);
    //Explanation: carPrice is the principal for the dealer.
    // dealerRate / 12 converts the annual rate to a monthly rate.
    // term * 12 converts the loan term from years to months.
    // dealerPayment is passed by reference to store the results.

    // Display payments
    cout << fixed << setprecision(2) << endl;
    //Explanation: Set the floating-point number formatting to fixed with 2 decimal places.

    cout << "Credit union payment: $" << creditPayment << endl;
    //Explanation: Output the monthly payment for the credit union.

    cout << "Dealer payment: $" << dealerPayment << endl;
    //Explanation: Output the monthly payment for the dealer.
    return 0;
}
{
// Function definition for the getPayment function void getPayment(int prin, double monthRate, int months, double &monthPay) {
//Explanations: This function calculates the monthly payment for a car loan.
monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
// Explanation: Use the formula for calculating the monthly payment:
// monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
}
