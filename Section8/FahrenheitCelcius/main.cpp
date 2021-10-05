#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);

int main( ){
    std::cout << "Hello Testing!" << std::endl;

    return 0;
}


void temperature_conversion(double fahrenheit_temperature) {
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR FUNCTION CALLS BELOW THIS LINE----
    
    double fahrenheit_to_celsius(double fahrenheit){
        double celsius = (5.0/9.0)*(temperature -32);
        return celsius;
    }
    
    double fahrenheit_to_kelvin(double){
        double kelvin = (5.0/9.0)*(temperature - 32) +273;
        return kelvin;
    }
    
    //----WRITE YOUR FUNCTION CALLS ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}
