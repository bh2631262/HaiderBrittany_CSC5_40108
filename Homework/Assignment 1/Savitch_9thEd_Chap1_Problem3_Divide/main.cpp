/* 
  File:   main.cpp
  Author: Brittany Haider
  Created on January 10, 2017, 9:45 AM
  Purpose:  Assignment 1, problem 1
 */

//System Libraries
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int number_of_pods, peas_per_pod, total_peas;
    
    cout << "press return after entering a number.\n";
    cout << "enter the number of pods: \n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod: \n";
    cin >> peas_per_pod;
    total_peas = number_of_pods / peas_per_pod;
    cout << "if you have ";
    cout << number_of_pods;
    cout << " pea pods \n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods.\n";
    
    return 0;
}