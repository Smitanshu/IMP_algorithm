#include <iostream>
using namespace std;
/*
class Teacher
{
public:
    void teach()
    {
        cout << "Teaching" << endl;
        ;
    }
};

class Researcher
{
public:
    void research()
    {
        cout << "researching" << endl;
    }
};
// Multiple inheritance one child classes inherited from multiple parent class:
class professor : public Teacher, public Researcher
{
public:
    void learn()
    {
        cout << "Learning" << endl;
    }
};
int main()
{
    professor obj;
    obj.teach();
    obj.learn();
    obj.research();

    return 0;
}
*/
class person
{

public:
    void walk()
    {
        cout << "....walking" << endl;
    }
};
class Teacher : virtual public person
{
public:
    void teach()
    {
        cout << "Teaching" << endl;
        ;
    }
};

class Researcher : virtual public person
{
public:
    void research()
    {
        cout << "researching" << endl;
    }
};
// Multiple inheritance one child classes inherited from multiple parent class:
class professor : public Teacher, public Researcher
{
public:
    void learn()
    {
        cout << "Learning" << endl;
    }
};
int main()
{
    professor obj;
    obj.teach();
    obj.learn();
    obj.research();

    // 1.Diamond problem:
    // Solution 1: Scope Resolution
    // obj.walk()// It cant run due to the ambiguity problem comes it does not know which  class and whom walk() function we are calling.

    obj.Teacher::walk();    // calling walk() method from Teacher class
    obj.Researcher::walk(); // calling function from Researcher  class

    // solution 2>Using virtual keyword for  Teacher and professor class:
    obj.walk();
    obj.walk();

    return 0;
}

/* Private member of the class can be accessed in main by the member function of its class.


  virtual:virtually inherit at runtime
  At compile time things are less Logical.
  Runtime:Things are  more logical.

->If One class is virtually created and second not  then also ambiguity occurs.


Following are cases used to solve diamond problem in MULTIPLE INHERITANCE.
Case 1:When virtual keyword is not used  for inheritance then it creates the
:>R.walk() copy
:>T.walk()
.....And when we call the obj.walk() by creating object of professor class it does not knows whose class we have to call

case 2:When Virtual keyword not used
-->We can use ::(Scope Resolution operator)
-->syntax:
          obj_name.Class_name ::MethodName();




Note:We can access the method walk() in all the class
This is the best example of the polymorphism.

 */