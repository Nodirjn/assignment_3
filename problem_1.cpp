#include <iostream>

using namespace std;

int main() {
    float num;
    
    cout << "Enter a number: ";
    cin >> num;

    float result = (((num + 40) / 5) - 6) * 10;
    cout << result << endl;

    return 0;
}