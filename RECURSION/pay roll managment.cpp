#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Employee {
public:
    Employee(const string& name, double hourlyRate)
        : name(name), hourlyRate(hourlyRate) {}

    string getName() const {
        return name;
    }

    double getHourlyRate() const {
        return hourlyRate;
    }

    double calculatePay(int hoursWorked) const {
        return hoursWorked * hourlyRate;
    }

private:
    string name;
    double hourlyRate;
};

int main() {
    vector<Employee*> employees;
    string employeeName;
    double hourlyRate;

    cout << "Enter employee name: ";
    getline(cin, employeeName);
    cout << "Enter hourly rate: ";
    cin >> hourlyRate;
    employees.push_back(new Employee(employeeName, hourlyRate));

    for (vector<Employee*>::const_iterator it = employees.begin(); it != employees.end(); ++it) {
        cout << "Employee: " << (*it)->getName() << endl;
        int hoursWorked;
        cout << "Enter hours worked: ";
        cin >> hoursWorked;
        double payment = (*it)->calculatePay(hoursWorked);
        cout << "Pay: Rs. " << payment << endl;
        cout << endl;
    }

    
    for (vector<Employee*>::const_iterator it = employees.begin(); it != employees.end(); ++it) {
        delete *it;
    }

    return 0;
}

