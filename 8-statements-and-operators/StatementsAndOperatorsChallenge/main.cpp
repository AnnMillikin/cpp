#include <iostream>
#include <vector>
using namespace std;

int main( ){
    
    std::cout << "Enter an integer representing the number of cents: " << endl;
    int cents {0};
    const int dollar {100};
    const int quarter {25};
    const int dime {10};
    const int nickel {5};
    const int penny {1};
    cin >> cents;
    
    cout << "\nYou entered: " << cents << " cents." << endl;
    
    int change {0},  nbr_dollars {0},  nbr_quarters {0},  nbr_dimes {0};
    int nbr_nickels {0},  nbr_penny {0};
    
    if(cents/dollar>0) {
    nbr_dollars = cents/dollar;
    cents -=nbr_dollars*dollar;
    }
    
    if(cents/quarter>0) {
        nbr_quarters = cents/quarter;
        cents -= nbr_quarters*quarter;
    }
    
    if(cents/dime>0){
        nbr_dimes = cents/dime;
        cents -= nbr_dimes*dime;
    }
    
    if (cents/nickel>0) {
        nbr_nickels = cents/nickel;
        cents -= nbr_nickels*nickel;
    }
    
    nbr_penny=cents;
    
    cout << "\n Here is your change" << endl;
    cout << nbr_dollars << " dollars, " << nbr_quarters << " quarters, " << nbr_dimes << " dimes, " << nbr_nickels << " nickels, " << nbr_penny << " pennies." << endl;
//    cout << "\ncents: " << cents << endl;
    
    return 0;
}
