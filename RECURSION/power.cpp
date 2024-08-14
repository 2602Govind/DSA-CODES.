#include <iostream>
using namespace std;

// Function to calculate power
int power(int a, int b) {
    // Base cases
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int ans = power(a, b / 2);

    if (b % 2 == 0) {
        return ans * ans;
    } else {
        return a * ans * ans;
    }
}

int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;

    int ans = power(a, b);
    cout << "The power of " << a << "^" << b << " is: " << ans << endl;

    return 0;
}

