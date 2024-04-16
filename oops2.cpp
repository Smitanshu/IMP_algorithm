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
//If you dont write it default present.
//if you write by custom
//It runs only when object is created in main function.
//It is mandatory to present 
class Constructor
{

public:
    int id;
    string name;
    int marks;
    bool present;
   //It created Ctor by programmer now he dont add deaultly.
   //If deault constructor is created in private then you cant use that box of class to any objetc.

   Constructor(){
    cout<<"It runs deafault due to it is present in the constructor funct";

   }

   //Default constructor assign garbage 


    void study(){
        cout<<"Study";
    }
      void mark(){
        cout<<"Marking";
    }
      void prsent(){
        cout<<"Present";
    }
};
int main(){
   // Constructor c1;
    //If object is not created or initialized in the main function.
    //Ctor not execute .




return 0;
}
