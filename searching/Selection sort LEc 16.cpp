#include<iostream>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++ ) {
        int minIndex = i;
        
        for(int j = i+1; j<n; j++) {
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    std::cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    
    return 0;
}

