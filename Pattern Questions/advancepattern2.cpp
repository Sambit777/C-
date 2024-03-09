#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Print the top half of the diamond
    for (int i = 0; i < n; i++) {
        // spaces
        for (int j = 1; j <= n - i - 1; j++) {
            cout << " ";
        }

        // Print left half of the row
        for (int j = 0; j <= 2 * i; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    // Print the bottom half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i - 1; j++) {
            cout << " ";
        }

        // Print left half of the row
        for (int j = 0; j <= 2 * i; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    // Print the inverse pyramid
    for (int i = n; i > 0; i--) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print left half of the row
        

        cout << "\n";
    }

    return 0;
}
