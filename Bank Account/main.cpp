//
//  main.cpp
//  Bank Account
//
//  Created by Jakob Fletcher on 10/17/17.
//  Copyright © 2017 Jakob Fletcher. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;

class BankAccount
{
    
    public:
    BankAccount();
    BankAccount(int dollars, int cents, double rate)
        {
            if((dollars < 0) || (cents < 0) || (rate < 0))
            {
            
                cout << "Illegal command" << endl;
                exit(1);
                
            }
            
            double balance = dollars + 0.01 * cents;
            double interest_rate = rate;
     
        }
    
    void update();

};


int main() {

    
    
    
    return 0;
}
