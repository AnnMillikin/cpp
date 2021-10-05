// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <deque>
#include <algorithm>

// template function to display any deque
template <typename T>
void display(const std::deque<T> &d) {
    std::cout << "[";
    for (const auto &elem: d)
        std::cout << elem << " ";
    std::cout <<  "]"<< std::endl;
}


bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    std::deque<char> forward;
        std::deque<char> backward;
    for (auto it = s.cbegin(), end = s.cend(); it != end; ++it) {
        char c = *it;
        if(std::isalpha(c)){
        c=std::toupper(c);
        forward.push_front(c);
        backward.push_back(c);
        }
        }
    }
    std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    display(forward);
    display(backward);
    std::cout << "\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";

    if(forward==backward)
        return true;
    return false;
}

int main()
{ 
//    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
//        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
//        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::vector<std::string> test_strings{ "A Santa at NASA"};


    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(10) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}