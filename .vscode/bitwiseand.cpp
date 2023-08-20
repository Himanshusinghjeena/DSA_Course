#include <iostream>
using namespace std;
// Function to count the number of set bits in a number
int countSetBits(int num) {
    int count = 0;
    while (num > 0) {
         count=count  + (num & 1);
         
        num >>= 1;
    }
    return count;
}

int main() {
    int a, b;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    int totalSetBits = countSetBits(a) + countSetBits(b);

    cout << "Total set bits in both numbers: " << totalSetBits << endl;

    return 0;
}
