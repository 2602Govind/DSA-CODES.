#include <iostream>

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);

    // Check if the array is empty
    if (arraySize > 0) {
        std::cout << "Array is not empty." << std::endl;
    }

    // Print the first element
    std::cout << "First element: " << myArray[0] << std::endl;

    // Print the last element
    std::cout << "Last element: " << myArray[arraySize - 1] << std::endl;

    return 0;
}

