// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <iomanip>

int main() {

    
    std::ofstream out_file("/Users/amillikin/cpp/Section19/Challenge_4/romeoandjulietWithLineNbrs.txt");
    if(!out_file) {
        std::cerr << "invalid output file" << std::endl;
        return 1;
    }


    std::ifstream in_file{"/Users/amillikin/cpp/Section19/Challenge_4/romeoandjuliet.txt"};
    if(!in_file) {
        std::cerr << "invalid input file" << std::endl;
        return 1;
    }
    
    std::string line;
    int line_count{1};
    
    while(!in_file.eof()) {
        std::getline(in_file, line);
        out_file << std::setw(6) << line_count << " " << line << std::endl;
        line_count++;
        
    }
    
    return 0;
}

