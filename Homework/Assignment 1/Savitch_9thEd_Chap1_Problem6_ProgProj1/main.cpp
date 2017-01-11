/* 
  File:   main.cpp
  Author: Brittany Haider
  Created on January 11, 2017, 9:45 AM
  Purpose:  Assignment 1, problem 6. Calculates the product and sum of two 
 * numbers
 */

//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int first_number, second_number, sum_of_numbers, product_of_numbers;
    
    cout << "press return after entering a number.\n";
    cout << "enter the first number: \n";
    cin >> first_number;
    cout << "Enter the second number: \n";
    cin >> second_number;
    sum_of_numbers = first_number + second_number; 
    product_of_numbers = first_number * second_number;
    cout << "if your numbers are ";
    cout <<  first_number;
    cout << "and ";
    cout << second_number;
    cout << " then\n";
    cout << "the sum of numbers is ";
    cout <<  sum_of_numbers;
    cout << "and the product of numbers is ";
    cout << product_of_numbers;
    
    return 0;
}