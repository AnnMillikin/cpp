#include <iostream>

using namespace std;

    const int small_room_cost {25};
    const int large_room_cost {35};
    const float sales_tax {.06};
    const int days_estimate_valid {30};


int main( ){
    
     int number_small_rooms {0};
     int number_large_room {0};
    cout << "Hello, welcome to Frank's Carpet Cleaning Service\n\n";
    cout << "How many small rooms would you like cleaned? ";
    cin >> number_small_rooms;
    cout << "How many large rooms would you like cleaned? ";
    cin >> number_large_room;
    cout << "\n\nEstimate for carpet cleaning service";
    cout << "\nNumber of small rooms: " << number_small_rooms;
    cout << "\nNumber of large rooms: " << number_large_room;
    cout << "\nPrice per small room: $" << small_room_cost;
    cout << "\nPrice per large room: $" << large_room_cost;
    cout << "\nCost: $" << (number_small_rooms*small_room_cost)+(number_large_room*large_room_cost);
    cout << "\nTax: $" << ((number_small_rooms*small_room_cost)+(number_large_room*large_room_cost))*sales_tax;
    cout << "\n======================================";
    cout << "\nTotal estimate: $" << (number_small_rooms*small_room_cost)+(number_large_room*large_room_cost)+(((number_small_rooms*small_room_cost)+(number_large_room*large_room_cost))*sales_tax);
    cout << "\nThis estimate is valid for " << days_estimate_valid << " days" << endl;
    
    return 0;
}
