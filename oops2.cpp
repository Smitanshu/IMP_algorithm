// Access Modifier:Default members of a class is private
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int marks;
    int roNo;
};


int main()
{
    Student s1;
    s1.name = "Smitanshu";  
    cout << s1.name << endl;
    //It Gives error if data memebr "name " is declared in private

    return 0;
}
