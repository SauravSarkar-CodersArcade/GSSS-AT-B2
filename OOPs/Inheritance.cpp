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
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};
class Developer: public Employee{
public:
    string FavProLanguage;
    Developer(string name, string company, int age, string favProLang):
            Employee(name, company, age){
        FavProLanguage = favProLang;
    }
    void fixBugs(){
        cout << Name << " is fixing bugs using " << FavProLanguage << endl;
    }
};
int main() {
    Developer d("Aashit", "Bizotic", 38, "C++");
    d.employeeDetails();
    d.fixBugs();
    return 0;
}
