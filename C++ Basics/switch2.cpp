#include <iostream>
using namespace std;

int main() {
    const int x = 10;
    const int y = 5;

    switch (x + y) {
        case 15:
            cout << "Result is 15." << endl;
            break;
        case 20:
            cout << "Result is 20." << endl;
            break;
        default:
            cout << "No match found." << endl;
    }

    return 0;
}