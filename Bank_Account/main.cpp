//
//  main.cpp
//  Calculator
//
//  Created by Jakob Fletcher on 5/6/17.
//  Copyright © 2017 Jakob Fletcher. All rights reserved.
//
//
//
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, const char * argv[]) {
    
    string depo;
    double deposit_amt;
    double withdraw_amt;
    double current_amt = 50;
    
    
    cout << "Hello, and welcome to the Jakob Fletcher credit union. ";
    cout << "Your current balance is " << "$" << current_amt << endl;
    cout << "To make a deposit, press 'd'. To make a withdrawal, press 'w' ";
    cin >> depo;
    
    while(depo != "d" && depo != "w"){
        cout << "INVALID!!! Try again";
        cin >> depo;
    }

    if(depo == "d"){
        
        cout << "Please enter the amount you would like to deposit: ";
        cin >> deposit_amt;
        
        deposit_amt = deposit_amt + current_amt;
        
        cout << "Your current amount is: " << "$" << deposit_amt << " ";
    } else if(depo == "w"){
        cout << "Enter the amount you would like to withdraw: ";
        cin >> withdraw_amt;
        while (withdraw_amt > current_amt) {
            cout << "You can't withdraw more than you have. Try Again ";
            cin >> withdraw_amt;
        }
        current_amt = current_amt - withdraw_amt;
        cout << "Your new balance is " << "$" << current_amt << " " << endl;
        cout << "Would you like to make another transaction? ";
        cin >> depo;
    }
    else{
        cout << "INVALID!!!";
    }
    
    return EXIT_SUCCESS;
}
