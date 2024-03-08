// C++ code for array reversing

#include <iostream>
using namespace std;

int main() {
   

    int a;
    cin >> a;

    for (int i = 0; i < a; i++) {
        int n;
        cin >> n;

        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        // Perform array reversal
        for (int j = 0; j < n / 2; j++) {
            swap(arr[j], arr[n - j - 1]);
        }

        // Print the array
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }

    return 0;
}
