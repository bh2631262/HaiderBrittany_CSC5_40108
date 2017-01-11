/* 
  File:   main.cpp
  Author: Brittany Haider
  Created on January 10, 2017, 10:17 PM
  Purpose:  Assignment 1, Problem 5. Calculate fencing req. via Width*Height
 */

//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int width, height, total_fencing_required;
    cout<< "Hello! \n";
    cout << "press return after entering a number.\n";
    cout << "enter the width of the fence: \n";
    cin >> width;
    cout << "Enter the height of the fence: \n";
    cin >> height;
    total_fencing_required = width * height;
    cout << "if the fence has a width of  ";
    cout <<  width;
    cout << " feet  \n";
    cout << "and ";
    cout << " a height of \n";
    cout << height;
    cout << " feet \n";
    cout << " then you need ";
    cout << total_fencing_required;
    cout << " feet of fencing total.\n";
    cout<< "Goodbye! \n";
    
    return 0;
}