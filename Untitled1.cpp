#include<iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    // Prompt the user to enter two integers
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;
    // Calculate and display the GCD
    int result = gcd(num1, num2);
    cout << "The Greatest Common Divisor (GCD) of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
