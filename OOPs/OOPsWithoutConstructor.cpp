#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    string Company;
    int Age;

    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};
int main() {
    Employee e1;
    e1.Name = "Ashank";
    e1.Company = "Bizotic";
    e1.Age = 27;
    e1.employeeDetails();
    return 0;
}
