#include <iostream>
#include <vector>
using namespace std;


int main( ){
    cout << "Boring !" << endl;
    cout << endl;
    
    vector<int> vec {2,4,6,8};
  
    int result{0};
    
        for(size_t i{0}; i<vec.size();++i){
            cout << "beginning of i loop when i: "<<i<<" vec.at(i): "<< vec.at(i)<<endl;
            for(size_t j {i+1}; j<vec.size();++j){
           
            result+=vec.at(i)*vec.at(j);
            cout<<"vec.at(i): "<< vec.at(i)<< " vec.at(j): "<< vec.at(j) <<" result: "<< result << " i: " << i << "j: " <<j << endl;
            }
    }
    
    cout<< result << " is the result";
    return 0;
}
