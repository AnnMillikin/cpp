#include <iostream>
#include <cstring>
using namespace std;

int main( ){
    char first_name[] {"Bjarne"};
    char last_name[] {"Stroustrup"};
    char whole_name[50];
    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);
    strcpy(whole_name,first_name);
    strcat(whole_name,last_name);
    int whole_name_length = strlen(whole_name);
    cout<< "first: "<<first_name<<" last: "<<last_name<< " whole: "<< whole_name<<endl;
    cout<<"lengths first: "<<first_name_length<< " last: "<< last_name_length<< " whole: "<< whole_name_length<< endl;
    
    
    
    return 0;
}
