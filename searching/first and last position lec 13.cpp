#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        } else if (key > arr[mid]) {
            s = mid + 1; // Go right
        } else { // key < arr[mid]
            e = mid - 1; // Go left
        }
    }
    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        } else if (key > arr[mid]) {
            s = mid + 1; // Go right
        } else { // key < arr[mid]
            e = mid - 1; // Go left
        }
    }
    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    pair<int, int> p;
    p.first = firstOcc(arr, n, k);
    p.second = lastOcc(arr, n, k);
    return p;
}

int main() {
   vector<int> arr;
arr.push_back(1);
arr.push_back(2);
arr.push_back(2);
arr.push_back(3);
arr.push_back(3);
arr.push_back(3);
arr.push_back(4);
arr.push_back(5);
arr.push_back(5);
arr.push_back(6);

    int key = 3;
    int n = arr.size();
    pair<int, int> result = firstAndLastPosition(arr, n, key);
    cout << "First Occurrence: " << result.first << endl;
    cout << "Last Occurrence: " << result.second << endl;
    return 0;
}

