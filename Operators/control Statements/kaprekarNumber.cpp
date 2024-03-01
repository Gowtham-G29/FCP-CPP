#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is a Kaprekar number
bool isKaprekar(int num) {
    long long square = (long long)num * num;
    int numDigits = 0;
    int temp = num;

    // Count the number of digits in the original number
    while (temp > 0) {
        temp /= 10;
        numDigits++;
    }

    // Split the squared number into two parts
    long long divisor = pow(10, numDigits);
    long long rightPart = square % divisor;
    long long leftPart = square / divisor;

    // Check if the sum of the parts is equal to the original number
    if (rightPart + leftPart == num) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int num;

    // Input
   
    cin >> num;

    // Check and output result
    if (isKaprekar(num)) {
        cout << "Kaprekar Number" << endl;
    } else {
        cout << "Not a Kaprekar Number" << endl;
    }

    return 0;
}