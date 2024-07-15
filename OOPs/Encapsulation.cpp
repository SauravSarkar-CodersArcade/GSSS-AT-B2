#include <iostream>
using namespace std;
class Employee {
private:
    string Name;
    string Company;
    int Age;
public:
    // setters - set the attributes
    void setName(string name){
        Name = name;
    }
    void setCompany(string company){
        Company = company;
    }
    void setAge(int age){
        Age = age;
    }
    // getters - fetch/get the attributes
    string getName(){
        return Name;
    }
    string getCompany(){
        return Company;
    }
    int getAge(){
        return Age;
    }
    void employeeDetails(){
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }
};
int main() {
    Employee e1;
    e1.setName("Nikhil");
    e1.setCompany("Bizotic");
    e1.setAge(26);
    cout << "Name: " << e1.getName() << endl;
    cout << "Company: " << e1.getCompany() << endl;
    cout << "Age: " << e1.getAge() << endl;
    return 0;
}
