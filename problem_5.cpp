#include <iostream>

using namespace std;

int main() {
    int total_days, years, months, days;

    cout << "Enter the number of days: ";
    cin >> total_days;

    years = total_days / 365;

    int remaining = total_days % 365;
    months = remaining / 30;
    days = remaining % 30;

    cout << total_days << endl;
    cout << years << endl;
    cout << months << endl;
    cout << days << endl;
    
    return 0;
}