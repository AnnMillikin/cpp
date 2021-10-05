#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num { 10 };
    int* num_ptr { &num };
    cout << "num value: " << num << endl;            // 10
    cout << "num address: " << &num << endl;         // address
    cout << "num_ptr value: " << *num_ptr << endl;   // 10
    cout << "num_ptr address: " << &num_ptr << endl; // same address

    vector<string> stooges { "Larry", "Moe", "Curly" };
    vector<string>* stooges_ptr { nullptr };
    stooges_ptr = &stooges;

    cout << "first stooge: " << (*stooges_ptr).at(0);
    cout << "\n\nStooges\n";
    for(auto stooge : *stooges_ptr)
        cout << stooge << " ";
    cout << "\n";

    int *int_ptr {nullptr};
    int_ptr = new int;
    cout << int_ptr << endl;  //0x1b1460
    
    delete int_ptr;  // frees storage
    
    size_t size {3};
    double *temp_ptr{nullptr};
   // cin >> size;
    
    temp_ptr = new double[size];
    cout <<temp_ptr<< endl; //0xaa1930
    cout << "size temp_ptr: " << sizeof temp_ptr << endl;
    delete [] temp_ptr;
    
    int scores [] {100,95,89, 68, -1};
    cout << scores << endl; // 0xaa1930
    cout << *scores << endl;  // 100
 cout << "=============================================\n\n";   
    int *score_ptr {scores};

    while(*score_ptr !=-1){
        cout << *score_ptr << endl;
        score_ptr++;
        // (*score_ptr)++ would increment the value
    }

    
//    cout << score_ptr << endl; // some address
//    cout << *score_ptr << endl; // 100
    
    /****
     * Subscript Notation
array_name[index]
pointer_name[index]

Offset Notation
*(array_name) + index
*(pointer_name) + index
*/

// array_name[index]
//pointer_name[index]

//cout << scores[0]<< endl;;
//cout << score_ptr[0]<< endl;;
//
//
////Offset Notation
////*(array_name) + index
////*(pointer_name) + index
//
//cout << *(scores +1)<< endl;
//cout << *(score_ptr +1)<< endl;
        return 0;
}
