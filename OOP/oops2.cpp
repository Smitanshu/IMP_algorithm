// Access Modifier:Default members of a class is private
#include <iostream>
#include <string>
using namespace std;
// class Student
// {
// public:
//     int id;
//     string name;
//     int marks;
//     int roNo;
// };

// int main()
// {
//     Student s1;
//     s1.name = "Smitanshu";
//     cout << s1.name << endl;
//     //It Gives error if data memebr "name " is declared in private

//     return 0;
// }

// Constructor:Which has same function name as class name.
// It is an instance of an class which does not have return type.
// Also called ctor it is the onlu function in cpp which does not have return type
// If you dont write it default present.
// if you write by custom
// It runs only when object is created in main function.
// It is mandatory to present
// class Constructor
// {

// public:
//     int id;
//     string name;
//     int marks;
//     bool present;
//     // It created Ctor by programmer now he dont add deaultly.
//     // If deault constructor is created in private then you cant use that box of class to any object.
//     // Default constructor assign garbage
//     Constructor()
//     {
//         cout << "Default ctor called" << endl;
//     }

//     // parameterized constructor:
//     Constructor(int _id, string _name, int _marks, bool _present)
//     {
//         id = _id;
//         name = _name;
//         marks = _marks;
//         present = _present;
//         cout << "Parameterized ctor called" << endl;
//     }

//     Constructor(int _id, string _name, int _marks)
//     {
//         id = _id;
//         name = _name;
//         marks = _marks;

//         cout << "Parameterized ctor without present called" << endl;
//     }
//     void study()
//     {
//         cout << "Study";
//     }
//     void mark()
//     {
//         cout << "Marking";
//     }
//     void prsent()
//     {
//         cout << "Present ";
//     }
// };
// int main()
// {
//     Constructor c1; // Default constructor called at this time
//     // If object is not created or initialized in the main function.
//     // Ctor not execute .

//     Constructor c2(36, "Smitanshu", 72, 1); // parameterized ctor called
//     cout << c2.id << endl;
//     cout << c2.name << endl;

//     // This calle the polymorphism concept how he knows that withoud absent parameter constructor
//     // we have to call while the all constructor name is same->> known polymorphism.
//     Constructor c3(37, "Himanshu", 85);
//     cout << c3.name << endl;
//     cout << c3.marks << endl;

//     return 0;
// }

// using *this for creation of parameterized constructor :
//*this added by compiler privately

class Student_this
{
private:
    string gf;

public:
    int id;
    int marks;
    string name;

    Student_this()
    {
        cout << "Default ctor called" << endl;
    }

    Student_this(int id, int marks, string name)
    {
        this->id = id;
        this->marks = marks;
        this->name = name;
        cout << "Parameterized constructor called" << endl;
    }
};
int main()
{

    // At this allocating object on stack
    Student_this s; //
    Student_this s2(36, 80, "Smitanshu");
    cout << s2.id << endl;
    cout << s2.marks << endl;
    cout << s2.name << endl;

    // Lets allocating  on heap:

    Student_this *s3 = new Student_this(100, 80, "Himanshu");
    cout << s3->name << endl;
    cout << s3->id << endl;
    cout << s3->marks << endl;

    cout << "Second way of printing from heap:" << endl;
    // Second way:
    cout << (*s3).name << endl;
    cout << (*s3).id << endl;
    cout << (*s3).marks << endl;

    delete s3; // no memory leak

    return 0;
}

/*The arrow operator -> in C and C++ is used for
accessing members (variables, methods) of a structure or class through a pointer.


*/