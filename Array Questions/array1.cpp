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

            for (int j = 0; j < n / 2; j++) {
            swap(arr[j], arr[n - j - 1]);

            for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        }

        // Print the array
        
        }

        // Perform array reversal
        
        cout << endl;
    }

    return 0;
}