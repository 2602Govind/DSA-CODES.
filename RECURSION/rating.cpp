#include <iostream>
#include <string>

int main() {
    int rating;

    std::cout << "Rate from 1 to 5 stars: ";
    std::cin >> rating;

    if (rating < 1 || rating > 5) {
        std::cout << "Invalid rating. Please enter a number between 1 and 5.\n";
    } else {
        std::cout << "You rated " << rating << " stars.\n";
        
        std::string description;
        
        switch (rating) {
            case 1:
                description = "Poor";
                break;
            case 2:
                description = "Fair";
                break;
            case 3:
                description = "Average";
                break;
            case 4:
                description = "Good";
                break;
            case 5:
                description = "Excellent";
                break;
        }
        
        std::cout << "Description: " << description << std::endl;
    }

    return 0;
}

