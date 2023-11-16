/*
The purpose of this simple c++ project is to demonstrate my ability
to code in c++ by using classes.
*/


#include <iostream>


//  Struct to store the students
// struct studentArray {
//     Student studentObject;
// };



class Student {

    // in

    private:
        std::string studentName;
        int studentID;

    public:
        void printStudentInfo () {
            std::cout << "Student Name: " << (this->studentName) << std::endl;
            std::cout << "Student ID  : " << (this->studentID) << std::endl;
        }


    //  Constructor
    Student(std::string student_Name, int student_ID) {
        this->studentName = student_Name;
        this->studentID = student_ID;
    }


    //  Getter Methods
    std::string getStudentName () {
        return this->studentName;
    }

    int getStudentID () {
        return this->studentID;
    }


    //  Setter Methods
    void modifyStudentName (std::string newName) {
        this->studentName = newName;
    }

    void modifyStudentID (int newID) {
        this->studentID = newID;
    }
    
};





int main () {
    using std::cout;
    using std::string;
    using std::cin;
    using std::endl;
    // Student student1("Abinash Biswal" , 1002175520);
    // student1.printStudentInfo();

    cout << "\n\n\nWelcome to the Student Management System\n\n\n" << endl;


    
    return 0;
}