#include <iostream>
using namespace std;

int main() {
    // Initialize i with 5
    int i = 5;

    // Use a while loop to find the first multiple of 5 that is also a multiple of 7
    while (true) {
        if (i % 7 == 0) {
            cout << "The first multiple of 5 that is also a multiple of 7 (using while loop) is: " << i << endl;
            break;
        }
        i += 5; // Check multiples of 5
    }

    // Use a for loop to find the first multiple of 5 that is also a multiple of 7
    for (i = 5; ; i += 5) {
        if (i % 7 == 0) {
            cout << "The first multiple of 5 that is also a multiple of 7 (using for loop) is: " << i << endl;
            break;
        }
    }

    // Use a nested loop to find the first multiple of 5 that is also a multiple of 7
    for (i = 5; ; i += 5) {
        for (int j = 2; j < 7; j++) {
            if (i % j == 0) {
                cout << "The first multiple of 5 that is also a multiple of 7 (using nested loop) is: " << i << endl;
                return 0;
            }
        }
    }

    return 0;
}
