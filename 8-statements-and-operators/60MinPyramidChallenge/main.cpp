#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main( ){
    cout << "Enter a string for a letter pyramid" << endl;
    string pyramid {};
    cin>>pyramid;
    vector<char> forward;
    vector<char> backward;
    
    // populate forward
    for(char c: pyramid){
        forward.push_back(c);
    }

    string blanks(forward.size()-1,' ');
    string str="";
    
    for(int i{0}; i<pyramid.length(); ++i){
        cout<< blanks;
        str +=forward.at(i);
        cout << str;

        // display remaining strings in reverse order HARDEST PART
        for (int b {i-1}; b >= 0; --b) {
            cout<<forward.at(b);
        } 
        cout <<endl;
        blanks.erase(0,1);
    }
    return 0;
}
