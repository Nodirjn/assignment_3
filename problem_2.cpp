#include <iostream>

using namespace std;

int main() {
    double meters, inches;

    cout << "Enter the length: ";
    cin >> meters;

    // 1 meter = 39.37 inches
    inches = meters * 39.37;
    cout << inches << endl;

    return 0;
}