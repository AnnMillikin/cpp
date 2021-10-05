// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>
#include <deque>

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
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    
        std::stack<char> stck;
        std::queue<char> que;
    for (auto it = s.cbegin(), end = s.cend(); it != end; ++it) {
        char c = *it;
        if(std::isalpha(c)){
            c=std::toupper(c);
            stck.push(c);
            que.push(c);
        }
    }
    
    char c1, c2;
    
    for(size_t i{0}; i<stck.size(); i++){
        c1 = stck.top();
        c2 = que.front();
        if (c1!=c2){
            return false;
        }
        stck.pop();
        que.pop();
    }

    return true;
}

int main()
{
//    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
//        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
//        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };

    std::vector<std::string> test_strings{  "C++" };

   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}