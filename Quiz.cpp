#include <iostream>
#include <string>

using namespace std;

struct Question {
    string question;
    string optionA;
    string optionB;
    string optionC;
    string optionD;
    char correctAnswer;
};

int main() {

    int n;

    cout << "Enter number of questions: ";
    cin >> n;

    cin.ignore();

    Question quiz[100];

    // Input Questions
    for(int i = 0; i < n; i++) {

        cout << "\nEnter Question " << i + 1 << ":\n";

        cout << "Question: ";
        getline(cin, quiz[i].question);

        cout << "Option A: ";
        getline(cin, quiz[i].optionA);

        cout << "Option B: ";
        getline(cin, quiz[i].optionB);

        cout << "Option C: ";
        getline(cin, quiz[i].optionC);

        cout << "Option D: ";
        getline(cin, quiz[i].optionD);

        cout << "Correct Answer (A/B/C/D): ";
        cin >> quiz[i].correctAnswer;

        cin.ignore();
    }

    int score = 0;
    char userAnswer;

    cout << "\n=====================================\n";
    cout << "             QUIZ START\n";
    cout << "=====================================\n";

    // Start Quiz
    for(int i = 0; i < n; i++) {

        cout << "\nQ" << i + 1 << ". "
             << quiz[i].question << endl;

        cout << "A. " << quiz[i].optionA << endl;
        cout << "B. " << quiz[i].optionB << endl;
        cout << "C. " << quiz[i].optionC << endl;
        cout << "D. " << quiz[i].optionD << endl;

        cout << "Enter your answer: ";
        cin >> userAnswer;

        if(toupper(userAnswer) ==
           toupper(quiz[i].correctAnswer)) {

            score++;
        }
    }

    cout << "\n=====================================\n";
    cout << "              RESULT\n";
    cout << "=====================================\n";

    cout << "Score: " << score
         << "/" << n << endl;

    return 0;
}