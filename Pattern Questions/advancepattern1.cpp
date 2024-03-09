/*C++ code for printing pattern
      *
     * *
    * * *
   * * * *
  * * * * *   */

 #include <iostream>

using namespace std;

int main() {
    int number;
    cin >> number;

    for (int i = 0; i < number; i++) {
        for (int j = 1; j <= number - i - 1; j++) {
            cout << " ";
        }

    
        for (int j = 0; j <= 2 * i; j++) {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}