#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    // test your code here
    
    try {
        std::unique_ptr<Account> thelmasAccount = std::make_unique<Savings_Account>("Thelma", -100);
        std::cout << "Use Thelma's account" << std::endl;
    
    } catch (const IllegalBalanceException &ex) {
        std::cerr << ex.what() << std::endl;
    } catch (const InsufficientFundsException &ex) {
        std::cerr << ex.what() << std::endl;
    }
    
    try {
        std::unique_ptr<Account> LouiseAccount = std::make_unique<Checking_Account>("Louise", 100);
        std::cout << *LouiseAccount << std::endl;
        LouiseAccount->withdraw(98);
        std::cout << "Use Louise's account" << *LouiseAccount<< std::endl;
        LouiseAccount->withdraw(98);
    } catch (const IllegalBalanceException &ex) {
        cout << ex.what() << std::endl;
    } catch (InsufficientFundsException &ex) {
        cout << ex.what() << std::endl;
    }
    
    
    
       
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

