#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main( ){
    vector<char> forward {'A','B','C','D'};
    vector<char> numbers {'1','2','3','4'};
    
    
    cout << "increment for loop going forward thru vector" << endl;
    // increment for loop
    for (size_t i{0}; i < forward.size(); ++i ){
        cout << forward.at(i);
    }
    cout <<"\n================\n"<< endl;
    
    //////// decrement for loop
    
    // size = 4; Decrement d = 3 (D),  2 (C),  1 (B), 0
    cout << "decrement for loop going backward thru vector" << endl;
    for(int d{forward.size()-1}; d>=0; --d){
        cout << forward.at(d);
    }
    cout <<"\n================\n"<< endl;
    
    // NOTE:  Since the j will evaluate to a negative number, you cannot use size_t because that's an UNSIGNED int
    
    
    // table created with nested for loop
    for (int i{0}; i<forward.size(); ++i){
        for (int j{0}; j < numbers.size(); ++j){
            cout << forward.at(i)<< numbers.at(j)<< " ";
        }
        cout << endl;
    }
    
    

    return 0;
}
