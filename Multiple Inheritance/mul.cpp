#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Course {
protected:
    string courseName;
    int courseCode;
public:
    void getCourseData() {
        cout << "Enter course name: ";
        cin >> courseName;
        cout << "Enter course code: ";
        cin >> courseCode;
    }

    void displayCourseData() {
        cout << "Course Name: " << courseName << endl;
        cout << "Course Code: " << courseCode << endl;
    }
};

class Student : public Person, public Course {
public:
    void getStudentData() {
        getPersonData();
        getCourseData();
    }

    void displayStudentData() {
        displayPersonData();
        displayCourseData();
    }
};

int main() {
    Student student;
    student.getStudentData();
    student.displayStudentData();

    return 0;
}
