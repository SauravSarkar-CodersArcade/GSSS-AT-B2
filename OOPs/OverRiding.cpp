#include <iostream>
using namespace std;
class AbstractEmployee{
    virtual void checkPromotion() = 0; // Pure Virtual Function // Interface
    // Implementation is given in the child class
};
class Employee:AbstractEmployee{
protected:
    string Name;
public:
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
    virtual void work(){
        cout << Name << " is checking drafts, sending emails, attending meetings...!!" << endl;
    }
    void checkPromotion(){
        if (Age > 25){
            cout << Name << " is promoted to higher rank...!!!" << endl;
        } else{
            cout << Name << "! Sorry, no promotion for you..!!" << endl;
        }
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
    void work(){
        cout << Name << " builds apps using " << FavProLanguage << endl;
    }
};
class Teacher: public Employee{
public:
    string Subject;
    Teacher(string name, string company, int age, string subject):
            Employee(name, company, age){
        Subject = subject;
    }
    void conductClass(){
        cout << Name << " is conducting class in " << Subject << endl;
    }
    void work(){
        cout << Name << " teaches " << Subject << endl;
    }
};
int main() {
    Developer d("Saritha", "TCS", 32, "Python");
    Teacher t("Ramya", "Wipro", 22, "Mathematics");
    // What is the most important use of Polymorphism?
    /*
     * The most important use of Polymorphism is that a Parent Class
     * reference can be used to refer to a child class object.
     */
    Employee* e1 = &d;
    Employee* e2 = &t;
    e1->work();
    e2->work();
    e1->checkPromotion();
    e2->checkPromotion();
    return 0;
}

