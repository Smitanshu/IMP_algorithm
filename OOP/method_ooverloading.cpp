#include <iostream>
using namespace std;

// Method overloading:
/*
class Add
{
public:
    void add(int a, int b)
    {

        cout << "Sum :" << a + b << endl;
        ;
    }
    void add(int a, int b, int c)
    {

        cout << "Sum :" << a + b + c << endl;
        ;
    }
    float add(float a, float b)
    {
        return a + b;
    }
};
int main()
{
    Add obj;
    obj.add(10, 2);
    obj.add(10, 2, 3);
    cout << obj.add(10.2f, 3.6f) << endl;
    ;
    cout << obj.add(3.0f, 2.0);

    return 0;
}
*/

// Method Overriding:
/*
class x
{
public:
    void operation(int a, int b)
    {
        cout << "Sum :" << a + b << endl;
    }
};
class y : public x
{

public:
    void operation(int a, int b)
    {
        cout << "Product:" << a * b << endl;
        x::operation(13, 4); //Method present in cpp only.
    }
};
int main()
{
    y obj;
    obj.operation(10, 2);

    return 0;
}
*/

// wap to find area of circle in superclass and area od rectangle in base by  method overriding.
class Circle
{
public:
    void area(int r)
    {
        cout << "Area of circle :" << 3.14 * r * r << endl;
        ;
    }
};
class Rectangle : public Circle
{
public:
    void area(float a, float b)
    {
        cout << "Area of Rectangle:" << a * b << endl;
        Circle::area(5);
    }
};

int main()
{

    Rectangle obj;
    obj.area(2.1f, 4.0f); // If float not mentioned it consider double
}

/*

Method Overloading :The concept of defining multiple method with a

Method overriding:The concept of defining  multiple methods with same name with same no of argument s or different no of arguments within different classes known as method overriding.
->when we override method by defaulting subclass method only executed.



//Exception Handling:
->Generally we can get two types of error in programming language
1.Syntax error:The error which occurs because of invalid syntax are known as syntax errors
   This error handled by users by correcting syntax

2.Runtime error:The error which occurs at runtime  those errors called as runTime errors and also called as exception.
    There are so many reasons behind to get runtime errors in any programming language
    1.Invalid Input
    2.Invalid logic
    3.Hardware failure
    4.Memory related issue and so on.

With respective to every reason cause RunTime error corresponding runtime representation class will be available in  any programming
Runtime erro representation classes tech known as exception classes
At time of execution of program if  nay runtime error corresponding error representation class obj will be created.
Creating runtime error representation class obj tech known as rising exception
After raising exception by the interpreter any code is implemented to handle the raise exception or not.
If the code is not implemented to handle the raise exception then program will be terminated abnormally.





//Exception Handling in c++:
We can handle the exception in cpp using :
1.try
2.throw
3.Catch

1.try :The statement  which we have to test we have to write inside the  try block
   ->If any exception is generated in try block the corresponding exception will be give to catch block.
   ->If trow blocks not handle the exception
   Generally  user friendly solution will be give in the program in throw block and catch


   //Different types of exception in Python:



//Different types of error in python:
1.IndexError
2.ValueError
3.KeyError
4.AttributeError
5.NameError




*/