#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "=============================" << endl;
    cout << "  NUMBER CHECKER " << endl;
    cout << "=============================" << endl;

    while (true) {
        // Prompt the user for input
        cout << "\nEnter an integer: ";
        cin >> num;

        // This will if the number is divisibisible  by 2
        if (num % 2 == 0) {
            cout << "Result: " << num << " is an Even number." << endl;
        } else {
            cout << "Result: " << num << " is an Odd number." << endl;
        }
    }

    return 0;
}
