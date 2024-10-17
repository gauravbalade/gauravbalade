//Certainly! Below is the corrected code that uses a do-while loop to find the sum of n integers entered by the user:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int sum = 0; // Initialize sum
    do {
        int num;
        cout << "Enter an integer: ";
        cin >> num;
        sum += num; // Add the entered number to the sum
        n--; // Decrement the count of remaining integers
    } while (n > 0); // Repeat until n becomes 0

    cout << "Sum of the " << n << " integers: " << sum << endl;
    return 0;
}



















