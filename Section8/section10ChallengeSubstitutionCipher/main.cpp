#include <iostream>
#include <string>
using namespace std;

int main( ){
    string secret_message {""};
    cout<<"Enter your secret message and then press enter."<<endl;
    getline(cin,secret_message);
    
    string decoded_message {""};
    
    const string alphabet {"abcdefghiklmnopqrstuvxyzABCDEFGHIKLMNOPQRSTVXYZ "};

    const string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxuznlwebgjhqdyvtkfuom "};
   cout<<"alpha length: "<< alphabet.length()<< " key length: "<<key.length()<<endl;
   
   for(char c: secret_message){
       size_t position=alphabet.find(c);
       cout <<"c: "<<c<< " is located at position: "<<position << endl;
       decoded_message.push_back(key.at(position));
   }
   cout << "decoded message: "<< decoded_message<<endl;
    return 0;
}
