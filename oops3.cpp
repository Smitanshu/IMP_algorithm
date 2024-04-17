// Const  keyword:--->
// compiler stores this in -( read only)- memory:
#include <iostream>
using namespace std;
int main()
{
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

    //1-->const with pointers:
    const int *ptr2 = new int(2);
    // int const *a=new int(2); same as above
    cout << *ptr2 << endl;
    //*ptr2=20;
    int b = 20;
   // ptr2 = &b; // pointer itself cant be reassigned
   cout<<*ptr2<<endl;

    return 0;
}
/*
    lvalue:Variable having Memory location.
    rvalue:Variable does not have memory location.



*/
