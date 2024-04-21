// Const  keyword:--->
// compiler stores this in -( read only)- memory:
#include <iostream>
using namespace std;
class abc
{
    mutable int x;
    // mutable allows you to change he const value which helps in debugging.
    int *y;
    int z;

public:
    abc()
    { //    constructor     having function name as class name
        x = 0;
        y = new int(0);
    }

    //      old practic of ctor:
    //  abc(int _x, int _y, int _z = 0)
    //  {
    //      this->x = _x;
    //      this->y = new int(_y);
    //      this->z = _z;
    //      // or

    //     // x=_x;
    //     // *y=_y;
    //     // z=_z;
    // }

    // initialization list:
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z) {}

    // The function in which the member variable will never change usinf CONST.
    int getX() const
    {
        // x = 50; not possible if const
        // x=10; //this is not possible if function is const
        // But using mutable keyword it is possible
        return x;
    }
    void setX(int _val)
    {
        x = _val;
    }

    int getY() const
    {
        // int f = 20;
        //  y = &f; //Not possible at const
        return *y;
    }
    void setY(int _y)
    {
        // *this->y =_y;
        *y = _y;
    }
    int getZ() const
    {
        return z;
    }
    void setZ(int _z)
    {
        z = _z;
    }
};
void print(const abc &a) // calls only CONST functions -->(const abc&a)
{
    cout << a.getX() << endl;
    cout << a.getY() << endl;
    cout << a.getZ() << endl;

    return;
}

int main()
{
    abc a(1, 2);
    print(a);

    return 0;
}

// int main2()
// {
// int const a = 10;
// const int b = 12;
// cout << a << endl;
// cout << b << endl;
//*a=11;  not possible expression must be modifiable value
//  int *p=&a;
//  *p=1000;  This method works in prec=vious compiler
// But modern compiler not.
//  cout<<a<<endl;

/*-----------------------------------------------*/

// int *ptr = new int;
// *ptr = 100;

// int *b = new int;
// *b = 1000;
// delete ptr;
// *b = *ptr;
// *ptr = *b;
// cout << b << endl;
// cout << *b << endl;
// cout << ptr << endl;
// cout << *ptr << endl;

/*-----------------------------------------------*/

// 1-->const with pointers:
// const int *ptr2 = new int(200); // CONST data , non CONST pointer
// // int const *a=new int(2); same as above
// cout << *ptr2 << endl;
// //*ptr2=20;
// int b = 20;
// // ptr2 = &b; // pointer itself cant be reassigned
// cout << *ptr2 << endl;
// cout << ptr2 << endl;
/*-----------------------------------------------*/

// 2-->NON CONST data ,  CONST pointer

// int *const ptr = new int(211);
// cout << *ptr << endl;
// *ptr = 20; // Data can be changed
// cout << *ptr << endl;
// int b = 100;
// // ptr = &b;  //not possible pointer is constant.
// *ptr = b;
// cout << *ptr << endl;
// cout << ptr << endl;

// 3-->CONST data , CONST pointer
// const int *const ptr = new int(111);
// cout << *ptr << endl;
// // *ptr=200;  //not possible CONST Data.
// int b = 100;
// ptr=&b;  //Not possible CONST pointer.

// return 0;
//}
/*
    lvalue:Variable having Memory location.
    rvalue:Variable does not have memory location.

    If CONST is before * then content will be CONST.

    We can declare a func as constant , which means that it does not
     modify the state of the object it is called on.




*/