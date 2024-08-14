#include <iostream>

double convertPercentageToCGPA(double percentage) {
    return percentage / 9.5;
}

int main() {
    double percentage;

    std::cout << "Enter the percentage: ";
    std::cin >> percentage;

    double cgpa = convertPercentageToCGPA(percentage);

    std::cout << "CGPA: " << cgpa << std::endl;

    return 0;
}

