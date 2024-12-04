#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an array of pointers to Student objects
    Student *students[3];

    // Allocating memory and initializing the objects
    students[0] = new Student("Alice", 20);
    students[1] = new Student("Bob", 22);
    students[2] = new Student("Charlie", 21);

    // Accessing and displaying the data using the array of pointers
    for (int i = 0; i < 3; i++) {
        students[i]->display();
    }

    // Deallocating the memory
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

    return 0;
}
