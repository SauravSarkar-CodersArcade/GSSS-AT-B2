#include <iostream>
#include <vector>
using namespace std;
class Person {
public:
    string Name;
    int Age;
    Person(string name, int age) : Name(name), Age(age){
        cout << "Person Constructor Invoked..!!" << endl;
    }
};
int main() {
    vector<Person> people;
    // Temporary obj; (Copy) // More memory
    people.push_back(Person("Sahana", 29));
    // Permanent Person obj; // Less memory
    people.emplace_back("Ramya", 34);
    for (const auto& person : people){
        cout << person.Name << " is " << person.Age << " Years old." << endl;
    }
    return 0;
}
