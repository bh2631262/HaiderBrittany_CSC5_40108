/* 
  File:   main.cpp
  Author: Brittany Haider
  Created on January 11, 10:30 AM
  Purpose:  Assignment 1, problem 7. Program calculates value of nickels,
 * dimes, and quarters 
 */

//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int number_of_dimes, number_of_nickels, number_of_quarters, 
            total_value_of_dimes, total_value_of_nickels,
        total_value_of_quarters, total_value_of_coins;
    
    cout << "press return after entering a number.\n";
    cout << "enter the number of dimes: \n";
    cin >> number_of_dimes;
    cout << "Enter the number of nickels: \n";
    cin >> number_of_nickels;
    cout << "Enter the number of quarters: \n";
    cin >> number_of_quarters;
    total_value_of_dimes = number_of_dimes * 10 ; 
    total_value_of_nickels = number_of_nickels * 5 ;
    total_value_of_quarters = number_of_quarters *  25 ;
    total_value_of_coins = total_value_of_dimes + total_value_of_nickels
             + total_value_of_quarters;
    cout << "The total value of your coins is: \n";
    cout << total_value_of_coins;
    cout << "cents.";
    
    return 0;
}