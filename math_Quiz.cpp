#include <iostream>
using namespace std;

class ExaminationSystem {
private:
    pair<string, double> questions[3]; 
    int score; 

public:
    ExaminationSystem() : score(0) {
        
        questions[0] = make_pair("What is 9 * 8?", 72.0);
        questions[1] = make_pair("What is 15 + 25?", 40.0);
        questions[2] = make_pair("What is 144 / 12?", 12.0);
    }

    void conductExam() {
        string name;
        int age;

        try {
            cout << "Enter your name: ";
            getline(cin, name);
            if (name.empty()) {
                throw "Name cannot be empty.";
            }

            cout << "Enter your age: ";
            cin >> age;
            if (cin.fail() || age <= 0) {
                throw "Invalid age. Age must be a positive number.";
            }

            cin.ignore(); 

        } catch (const char* e) {
            cerr << "Error: " << e << endl;
            return;
        }

        cout << "\n--- Starting Math Quiz ---\n";

        // Math Question
        for (int i = 0; i < 3; ++i) {
            double userAnswer;
            cout << questions[i].first << " ";
            cin >> userAnswer;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "Invalid input. Skipping this question.\n";
            } else if (userAnswer == questions[i].second) {
                score++;
            }
        }

        cout << "\nQuiz Completed!\n";
        cout << name << ", your score is: " << score << "/3." << endl;
    }
};

int main() {
    ExaminationSystem system;
    system.conductExam();
    return 0;
}