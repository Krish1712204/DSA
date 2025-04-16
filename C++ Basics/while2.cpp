#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // Using 'break' to exit the loop early when the target is found
    for (int num : numbers) {
        if (num == target) {
            cout << "Target found: " << target << endl;
            break; // Exit the loop immediately
        }
        cout << "Checking: " << num << endl;
    }

    // Using 'continue' to skip specific elements
    for (int num : numbers) {
        if (num % 2 == 0) {
            continue; // Skip even numbers
        }
        cout << "Odd number: " << num << endl;
    }

    return 0;
}