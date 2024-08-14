#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Last occurrence of an element
    vector<int> a(6);
    
    cout << "Enter 6 elements:\n";
    for (int i = 0; i < a.size(); i++) {
        cin >> a[i];
    }
    
    cout << "Enter the value of x: ";
    int x;
    cin >> x;
    
    int occr = -1; // Initialize to -1 to indicate 'not found'
    
    for (int i = a.size() - 1; i >= 0; i--) {
        if (a[i] == x) {
            occr = i;
            break;
        }
    }
    
    if (occr != -1) {
        cout << "The last occurrence of " << x << " is at index " << occr << ".\n";
    } else {
        cout << x << " is not found in the array.\n";
    }

    return 0;
}

