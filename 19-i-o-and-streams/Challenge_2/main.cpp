// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

/**
 * The 
 * answer key is the first item in the file.
Student1 name
Student1 responses
Student2 name
Student2 responses
 */

int main() {
    std::ifstream in_file;
    in_file.open("\\Users\\amillikin\\cpp\\Section19\\Challenge_2\\responses.txt");
    if(!in_file) {
        cerr << "Problem opening file" << endl;
        return 1;
    }
    
    int default_width{15};
    
    cout << setw(default_width) << left << "Student" << setw(default_width) << left << "Score" << endl;
    cout << "------------------------------------------------------" << endl;
    string answer_key{};
        int student_count{0}, sum_of_scores{0};
        float average_score{0};
    
    while(!in_file.eof()) {
        // first row is the answer key
        getline(in_file,answer_key);
//        cout << answer_key << endl;
        do {
        // student name
        string name{};
        getline(in_file,name);
        cout << setw(default_width) << left << name;
        
        // answers
        string answers{};
        
        
        getline(in_file, answers);
        // compare answers to answer_key
        int score{0};
        for(size_t i{0}; i< answers.size(); i++ ){
            if(answers.at(i)==answer_key.at(i))
                score++;
            /// TODO math score/answers.size
        }
        
        cout << setw(default_width) << score << endl;
        sum_of_scores+=score;
        student_count++;
        
        
        } while(!in_file.eof());
    }
    
    cout << "------------------------------------------------------" << endl;
    average_score = static_cast<double> (sum_of_scores) /student_count;
    cout << setw(default_width) << "Average Score" << setw(default_width) << setprecision(1) << fixed << average_score << endl;
    
    in_file.close();
    return 0;
}

