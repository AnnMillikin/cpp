#include <stdio.h>
#include <fstream>

int main(int argc, char **argv)
{
	    std::ifstream in_file {file_name};
    
if(!in_file) {
    std::cerr << "Error opening file" << std::endl;
} else {
std::string word{" "};

while (std::getline(in_file, word)) {
        std::cout << word << std::endl;
    }
}   

	return 0;
}
