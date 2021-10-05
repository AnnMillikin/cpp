#include <iostream>
using namespace std;

int main( ){
    int temperature;
    cout << "enter temp";
    cin >> temperature;
    if (temperature<50)
    cout << "It's cold!" << endl;
    if (temperature>50)
        cout << "It's hot!" << endl;
    else
        cout << "Maybe it's raining.";
    return 0;
}
