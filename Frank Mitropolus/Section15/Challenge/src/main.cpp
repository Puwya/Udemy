// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "../include/Savings_Account.h"
#include "../include/Account_Util.h"

int main() {
    std::cout.precision(2);
    std::cout << std::fixed;
   
    // // Accounts
    // std::vector<Account> accounts;
    // accounts.push_back(Account {});
    // accounts.push_back(Account {"Larry"});
    // accounts.push_back(Account {"Moe", 2000} );
    // accounts.push_back(Account {"Curly", 5000} );
    
    // display(accounts);
    // deposit(accounts, 1000);
    // withdraw(accounts,2000);
    
    // Savings 

    Account* ptr = new Savings_Account;
    std::vector<Account> sav_accounts {*ptr};
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);

    return 0;
}

