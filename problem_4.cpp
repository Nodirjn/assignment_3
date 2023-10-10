#include <iostream>

using namespace std;

int main(){
    float radius;

    cout << "Please enter the radius of the area: ";
    cin >> radius;

    float area = 3.14 * radius * radius;
    cout << "The area of the circle is: " << area << endl;

    return 0;
}