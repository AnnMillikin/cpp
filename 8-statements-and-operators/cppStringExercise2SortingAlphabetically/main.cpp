#include <iostream>
#include <string>
using namespace std;

int main( ){
    string journal_entry_1 {"Isaac Newton"};
    cout<< "journal entry 1: "<<journal_entry_1<<endl;
    
    string journal_entry_2 {"Leibniz"};
    cout<< "find: "<<journal_entry_1.find(" ")<<endl;
    int space=journal_entry_1.find(" ");
    cout<<"space: "<<space<<endl;
    
    journal_entry_1.erase(0,space+1);
     cout<< "journal entry 1: ******"<<journal_entry_1<<endl;
     cout<< "journal entry 2 ******"<<journal_entry_2<<endl;
     if(journal_entry_2<journal_entry_1){
         journal_entry_1.swap(journal_entry_2);
     }
     cout<< "journal entry 1: ******"<<journal_entry_1<<endl;
     cout<< "journal entry 2 ******"<<journal_entry_2<<endl;
   
    return 0;
}
