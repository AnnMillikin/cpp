#include <iostream>
#include <cmath>
using namespace std;

int main( ){

    
    double bill_total {102.78};
    int number_of_guests {5};

    //DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    double individual_bill = bill_total/number_of_guests;
    double individual_bill_1 = floor(individual_bill);
    double individual_bill_2 = round(individual_bill);
    double individual_bill_3 = (ceil(individual_bill*100))/100;


    cout<< "bill 1: " << individual_bill_1 << endl;
    cout<< "bill 2: " << individual_bill_2 << endl;
    cout<< "remainder: " << bill_total-individual_bill_1-individual_bill_2 << endl;
    cout<< "bill 3: " << individual_bill_3 << endl;
    
    
}
    //----WRITE YOUR CODE ABOVE THIS LINE----