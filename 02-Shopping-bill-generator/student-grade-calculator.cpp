// A simple Cpp program for calculating student grade
#include <iostream>
using namespace std;

int main() {
    double math, english, computer, physics, chemistry;

    cout << "===== Student Grade Calculator =====\n\n";

    cout << "Enter marks for Math: ";
    cin >> math;

    cout << "Enter marks for English: ";
    cin >> english;

    cout << "Enter marks for Computer: ";
    cin >> computer;

    cout << "Enter marks for Physics: ";
    cin >> physics;

    cout << "Enter marks for Chemistry: ";
    cin >> chemistry;

    double total = math + english + computer + physics + chemistry;
    double percentage = (total / 500) * 100;
    double average = total / 5;

    char grade;

    if (percentage >= 90) {
        grade = 'A';
    }
    else if (percentage >= 80) {
        grade = 'B';
    }
    else if (percentage >= 70) {
        grade = 'C';
    }
    else if (percentage >= 60) {
        grade = 'D';
    }
    else {
        grade = 'F';
    }

    cout << "\n===== Result =====\n";
    cout << "Total Marks: " << total << " / 500\n";
    cout << "Percentage: " << percentage << "%\n";
    cout << "Average: " << average << "\n";
    cout << "Grade: " << grade << "\n";

    return 0;
}