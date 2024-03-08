// To Find an element that appears once in an array
#include<iostream>

using namespace std;

#include <iostream>

int main() {
    int numberOfElements;
    cin >> numberOfElements;

    int array[numberOfElements];

    for (int i = 0; i < numberOfElements; i++) {
        cin >> array[i];
        
    }

    int result = 0;
    for (int i = 0; i < numberOfElements; i++) {
        result = result ^ array[i];
        cout << result << endl;
    }

    return result;
}