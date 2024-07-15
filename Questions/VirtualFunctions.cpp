#include <iostream>
using namespace std;
class Student {
public:
    string name;
    string usn;
    string email;
    int rank;
    Student(string n, string u, string e, int r){
        name = n;
        usn = u;
        email = e;
        rank = r;
    }
    void studentDetails(){
        cout << "Name: " << name << endl;
        cout << "USN: " << usn << endl;
        cout << "Email: " << email << endl;
        cout << "Rank: " << rank << endl;
    }
    virtual void service(){
        cout << name << " seeks education to serve the society."
             << endl;
    }
};
class EngineeringStudent : public Student {
public:
    string branch;
    EngineeringStudent(string n, string u, string e, int r, string b) :
            Student(n, u, e, r)
    {
        branch = b;
    }
    void service(){
        cout << name << " makes software applications."
             << endl;
    }
};
int main() {

    EngineeringStudent s1
            ("Sinchana", "100", "sinchana@gmail.com", 3, "cse");
    Student* s = &s1;
    s1.studentDetails();
    s1.service();
    s->studentDetails();
    s->service();
    return 0;
}
