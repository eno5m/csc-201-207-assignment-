#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "=============================" << endl;
    cout << "  NUMBER CHECKER " << endl;
    cout << "=============================" << endl;
    
    // Prompt the user for input
    cout << "Enter an integer: ";
    cin >> num;

    // Check divisibility by 2 using the modulus operator
    if (num % 2 == 0) {
        cout << "\nResult: " << num << " is an Even number." << endl;
    } else {
        cout << "\nResult: " << num << " is an Odd number." << endl;
    }

    return 0;
}
