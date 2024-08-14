#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {

    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while (s < e) {

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int binarySearch(vector<int>& arr, int s, int e, int key) {

    int start = s;
    int end = e;

    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{ //key < arr[mid]
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int findPosition(vector<int>& arr, int n, int k) {
    int pivot = getPivot(arr, n);
    if( k >= arr[pivot] && k <= arr[n-1]) {
        // BS on the second line
        return binarySearch(arr, pivot, n-1, k);
    } else {
        // BS on the first line
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main() {
     vector<int> arr;
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(2);
    int n = arr.size();
    int k = 6;
    int position = findPosition(arr, n, k);
    if (position != -1) {
        cout << "Element found at position: " << position << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}

