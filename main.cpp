#include <iostream>
#include <string>
using namespace std;

struct Student {
    int id;
    string name ;
    int age ;
    string branch;
    int semester;
};


Student student;
bool studentadded = false;
void studentmanagement() {
int choice;
while (true) {

    cout << "=================================" << endl;
    cout << "=================================" << endl;
    cout << "      STUDENT MANAGEMENT " << endl;
    cout << "1.Add student" << endl;
    cout << "2.View student" << endl;
    cout << "3.back" << endl;
    cout << "Enter your choice: " ;
    cin >> choice;

    switch (choice) {

        case 1:

        cout << "Enter Student ID: " ;
        cin >> student.id;

        cin.ignore();
        cout << "Enter Name: " ;
        getline(cin, student.name);

        cout << "Enter Age: " ;
        cin >> student.age;

        cin.ignore();
        cout << "Enter Branch: " ;
        getline(cin , student.branch);

        cout << "Enter Semester: " ;
        cin >> student.semester;

        studentadded = true ;
        cout << "\nstudent added succesfully" ;

        break;

        case 2:

        if (!studentadded) {

            cout << "No Student found " << endl;

        }
        else {

            cout << "============================== " << endl;
            cout << "============================== " << endl;
            cout << "          STUDENT " << endl;
            cout << "ID:" << student.id << endl;
            cout << "NAME:" << student.name<<  endl;
            cout << "AGE:" << student.age <<  endl;
            cout << "BRANCH:" << student.branch << endl;
            cout << "SEMESTER:" << student.semester << endl;
        }
        break;

        case 3:

        return;

        default:
        cout << "Invalid choice. try again" << endl;

    }
}

}

int main() {

    int choice;
    while(true) {
    
cout << "==========================="<< endl;
cout <<  "      CAMPUSFLOW              "<< endl;
cout << "   Campus Management System "<< endl;
cout << "==========================="<< endl;
cout << "1.Student Management" << endl;
cout << "2.Course Management" << endl;
cout << "3.Library" << endl;
cout << "4.Timetable"<< endl;
cout << "5.Exit"<< endl;
cout << "Enter Your Choice : " ;
cin >> choice;

switch(choice) {
    \
    case 1 :

    studentmanagement();
    break;
}

    }
}