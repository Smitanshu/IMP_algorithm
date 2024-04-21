#include <iostream>
using namespace std;
class Student
{
private:
  string gf;

public:
  string name;
  int roll;
  int marks;
  Student() // Default CTOR:
  {
    cout << "Default ctor called" << endl;
  }
  Student(string _name, int _roll, int _marks)
  {

    // this->name=_name;
    // this->roll=_roll;
    // this->marks=_marks;

    // or
    name = _name;
    roll = _roll;
    marks = _marks;
    cout << "Parameterized CTOR Called " << endl;
  }
  // COPY CTOR:
  // const is mandatory if hacker comes and changes value
  // By reference used it does not create new object
  // const used to read only
  Student(Student &srcobj)
  {
    // hacker
    // srcobj.name="Himanshu";  //This can change the data.Therefor CONST is mandatory.

    cout << "Student COPY CTOR called" << endl;
    this->name = srcobj.name;
    this->roll = srcobj.roll;
    this->marks = srcobj.marks;
  }
  ~Student()
  {
    cout << " Student DTOR called" << endl;
  }
};
int main()
{
  // Student S1;                      // Default CTOR called
  Student s2{"Smitanshu", 36, 86}; // Parameterized CTOR Called
  Student s3 = s2;                 // Best method for Copy CTOR                 // Default CTOR Called
  // Student s3(s2);               //Second method of copy Constructor
  // s3 = s2; // copy ctor but at this time copy ctor not called due it present in another line
  //  If we write Student s3=s2; at this time cop ctor called
  cout << s2.name << endl;
  cout << s3.name << endl;

  return 0;
  // After return 0 the object s1, s2, s3 destroyed by DTOR.
}
/*

==>Default CTOR add by compiler-->but you cant customize the data.
==>Therefor we use Parameterized CTOR
==>Default  copy CTOR added by compiler but default makes shallow copy and shallow copy is dangerous.
==>Default added DTOR added by compiler  is not always safe.
==>main is calling DTOR it is public
==> Use of DTOR is used to avoid the memory leak
  Student s1(-----);
  Student s2;
  s2=s1; //copy constructor

  int a=b----> int dest=src;
-->we dont need to add the copy CTOR it always add by compiler  until you manually add.
--> but adding copy constructor is good practice.
-->why we need copy constructor ?
=--<>When we want deep copy

-->pointer is in stack
-->Data is in heap.

-->Like CTOR DTOR  is present .


 Life cycle of variable:init , copy , destroy.
 Life cycle if object:


*/