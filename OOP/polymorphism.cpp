#include <iostream>
using namespace std;

/*
//Function Overloading:
int add(int a, int b)
{

    return a + b;
}
double add(double a, int b)
{
    return a + b;
}

int main()
{
    cout << add(5, 2) << endl;
    ;
    cout << add(5.2, 3) << endl;

    return 0;
}
*/

// Operator Overloading:
class Vector
{
private:
    int x, y; // Declared in private:

public:
    // parameter ctor:First method
    //  Vector(int _x, int _y){
    //      this->y=_y;
    //      this->x=_x;
    //  }

    // Parameter ctor  modern  declaration:[Init list]
    // Outside of bracket is the member of class and in under bracket is the member of ctor
    Vector(int _x, int _y) : x(_x), y(_y) {}

    void display()
    {

        cout << "X :" << x << "  "
             << " y: " << y << endl;
    }

    // op overloading
    void operator+(const Vector &src)
    { // It is like copy ctor
        // this would be point  to v1
        // src would be ref to v2

        this->x = this->x + src.x;
        this->y = this->y + src.y;

        // or same as above
        // this->x += src.x;
        // this->y += src.y;
    }
};

int main()
{

    Vector v1{144, 144};
    Vector v2{4, 5};

    // v2 + v1; // 6, 8  it is like v1.add(2);
    // v1.display();
    // We say that act like in my way that i said

    v1 + v2;      // In this the src=v2, destination=v1 addition occurs in the v1
    v1.display(); // 148 149
    v2.display(); // 4 5

    v2 + v1;
    v2.display(); // 152 154
    v1.display(); // 148  149

    return 0;
}

/*

Polymorphism :It is called as the many forms.
-->Polymorphism has two types.
1.Compile time polymorphism.: Compare to faster than the RunTime polymorphism
2.RunTime Polymorphism.

1.CompileTime Polymorphism:[Static Polymorphism]
-->1.Function Overloading(Multiple ctor, parameterized ctor, normal function)
   Function ha same name but parameter is different
   Function has same name and the datatype is different.

-->2.Operator Overloading:
--->example:
            C++ has the ability to provide the operators with a special meaning for
         a data type, this ability is known as operator overloading. For example,
        we can make use of the addition operator (+) for string class to concatenate
        two strings. We know that the task of this operator is to add two operands.
         So a single operator ‘+’, when placed between integer operands, adds them and
        when placed between string operands, concatenates them.


  As above example we use the operator(+) as addition of two vector
  like th way that i said

*/