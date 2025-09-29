#include <iostream>
using namespace std;

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    double principal;
    double rate;
    int time; 

    cout << "Enter principal amount: ";
    cin >> principal;

    cout << "Enter annual interest rate: ";
    cin >> rate;

    cout << "Enter time in years: ";
    cin >> time;

    
    double amount = principal * power((1 + rate), time);

   
    double compoundInterest = amount - principal;

    cout << "\nTotal amount after " << time << " years: " << amount << endl;
    cout << "Compound Interest earned: " << compoundInterest << endl;

    return 0;
}