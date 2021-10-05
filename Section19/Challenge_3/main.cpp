// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

bool find_substring(const std::string &word_to_find, const std::string &this_word) {
    std::size_t found = this_word.find(word_to_find);
    if (found == std::string::npos)
//    if(word_to_find == this_word)
        return true;
    return false;
}

int main() {
    std::ifstream in_file;
    in_file.open("/Users/amillikin/cpp/Section19/Challenge_3/romeoandjuliet.txt");
//    in_file.open("/Users/amillikin/cpp/Section19/Challenge_3/whatislove.txt");
    
    if(!in_file) {
        cerr << "invalid file" << endl;
        return 1;
    }
    
    string word_to_find{}, this_word{};
    cout << "enter word to find" << endl;
    cin >> word_to_find;
    cout << endl;

    int word_count{0}, found_count{0}, word_length{0};
   
   while (in_file >> word_to_find) {
        ++word_count;
        
        if (find_substring(word_to_find, this_word)) {
           found_count++;
           std::cout << this_word << " ";
        }        
    }

    cout << "Found " << found_count << " occurrances of the word: " << word_to_find << " out of " << word_count << " total words." << endl;
    
    return 0;
}

