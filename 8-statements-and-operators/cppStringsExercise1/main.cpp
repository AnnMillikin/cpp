#include <iostream>
#include <string>
using namespace std;

string unformatted_full_name {"StephenHawking"};

int main( ){
    int position {7}; 
    string first_name {unformatted_full_name.substr(0,position)};
    string last_name =unformatted_full_name.substr(position,unformatted_full_name.length()-position);
    string formatted_full_name=first_name + " " + last_name;
cout << "formatted: "<< formatted_full_name << endl;

    return 0;
}
