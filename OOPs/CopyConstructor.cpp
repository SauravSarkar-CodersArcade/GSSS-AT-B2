#include <iostream>

using namespace std;
class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    MyClass(int value) : data(value) {
        cout << "Parameterized Constructor" << endl;
    }

    // Copy constructor
    MyClass(const MyClass& other) : data(other.data) {
        cout << "Copy Constructor" << endl;
    }

    // Member function to display data
    void display() {
        cout << "Data: " << data << endl;
    }

private:
    int data;
};

int main() {
    // Using the default constructor
    MyClass obj1;

    // Using the parameterized constructor
    MyClass obj2(42);

    // Using the copy constructor
    MyClass obj3 = obj2;  // Or use MyClass obj3(obj2);

    // Displaying data
    cout << "Object 1: ";
    obj1.display();

    cout << "Object 2: ";
    obj2.display();

    cout << "Object 3: ";
    obj3.display();

    return 0;
}

