#include <bits/stdc++.h>
using namespace std;

// Function to calculate power of a digit to the given exponent
int power(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

void checkArmstrong(int n) {
    int temp = n;
    int sum = 0;
    int digits = 0;

    // Count the number of digits
    while (n > 0) {
        n = n / 10;
        digits++;
    }

    n = temp; // Restore the original number

    // Calculate the sum of each digit raised to the power of the number of digits
    while (n > 0) {
        int digit = n % 10;
        sum += power(digit, digits); // Use integer power function
        n = n / 10;
    }

    // Check if the sum is equal to the original number
    if (sum == temp) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}

int main() {
    int n;
    cin >> n; // Input number

    checkArmstrong(n); // Check if it's an Armstrong number
    return 0;
}
