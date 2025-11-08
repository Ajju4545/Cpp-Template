#include <iostream>
using namespace std;

// Base Class
class Person {
public:
    void displayInfo() {
        cout << "This is the base class: Person" << endl;
    }
};

// Derived Class 1
class Student : public Person {
public:
    void studentInfo() {
        cout << "This is derived class: Student" << endl;
    }
};

// Derived Class 2
class Teacher : public Person {
public:
    void teacherInfo() {
        cout << "This is derived class: Teacher" << endl;
    }
};

int main() {
    Student s;
    Teacher t;

    cout << "--- Student Object ---" << endl;
    s.displayInfo();     // function of base class
    s.studentInfo();     // function of Student class

    cout << "\n--- Teacher Object ---" << endl;
    t.displayInfo();     // function of base class
    t.teacherInfo();     // function of Teacher class

    return 0;
}