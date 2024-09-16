#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    float grade;

public:
    Student(string name, int age, float grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }

    void displayDetails() {
        cout << "Student Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
        cout << "Grade: " << this->grade << endl;
    }
};

int main() {
    Student student1("Ashu", 20, 88.5);

    student1.displayDetails();

    return 0;
}
