#include <iostream>

using namespace std;

int main() {
    int courses;
    double total_credits = 0.0;
    double total_marks = 0.0;

    cout << "Enter the number of courses: ";
    cin >> courses;

    for (int i = 0; i < courses; ++i) {
        double marks, credithours;

        cout << "Enter marks for course " << i + 1 << ": ";
        cin >> marks;

        cout << "Enter credit hours for course " << i + 1 << ": ";
        cin >> credithours;

        total_marks += marks * credithours;
        total_credits += credithours;
    }
    double gpa = total_marks / total_credits;

    cout << "GPA: " << gpa << endl;

    return 0;
}