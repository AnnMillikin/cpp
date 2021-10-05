#include <iostream>
#include <vector>
using namespace std;

vector<int> myList{1,2,3,4};

int main( ){
    char choice {'Q'};
    bool keep_running {true};
    
    while (keep_running){
        cout << "\n\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice:" << endl;
    
    cin >> choice;
    if (choice=='P' || choice=='p'){
        // display all of the elements in the list
        if(myList.empty()){
            cout << "[] - the list is empty" << endl;
        } else {
            for(size_t i{0}; i<myList.size();++i){
                cout << myList.at(i) << " ";
            }
            cout << endl;
                    continue;

        }
    } else if (choice=='A' || choice=='a'){
        cout << "Enter an integer to add to the list." << endl;
        int new_value {0};
        cin >> new_value;
        myList.push_back(new_value);
        cout << new_value << " added." << endl;
                continue;
    } else if (choice=='M' || choice=='m'){
        // calculate the mean
        if (myList.empty()){
            cout << "Unable to calculate the mean - no data" << endl;
        } else {
        float mean {0};
        int count {0};
        for(int i: myList){
            mean+=i;
            count+=1;
        }
        cout << (float)mean/count << " is the list average." << endl;
                continue;

        }
    } else if (choice=='S' || choice=='s'){ 
        // display the smallest
        if(myList.empty()){
            cout << "Unable to calculate the smallest - the list is empty" << endl;
        } else {
            float smallest {99999999999999999999.9};
            for (int i: myList){
                if (i<smallest){
                    smallest=i;
                }
            }
            cout << smallest << " is the smallest in the list" << endl;
                    continue;
        }
    } else if (choice=='L' || choice=='l'){
        // display the largest
        if(myList.empty()){
            cout << "Unable to calculate the largest - the list is empty" << endl;
        } else {
            float largest {-99999999999999999999.9};
            for (int i: myList){
                if (i>largest){
                    largest=i;
                }
            }
            cout << largest << " is the largest in the list" << endl;
                    continue;
        }
    } else if(choice=='Q' || choice=='q'){ 
        // quit
        break;
    } else {
        cout << "\nUnknown selection, please try again.\n";
        continue;
    }
    }
    
    return 0;
}
