#include <iostream>
using namespace std;
class Employee {
public:
    string Name;
    string Company;
    int Age;
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    ~Employee(){
        cout << "Object is destroyed...!!!" << endl;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};
int main() {
    Employee e1("Ashank", "Bizotic", 27);
    Employee e2 = Employee("A","B",1);
    e1.employeeDetails();
    return 0;
}
