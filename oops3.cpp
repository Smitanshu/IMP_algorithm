// Const  keyword:--->
//compiler stores this in only read only memory:


#include <iostream>
using namespace std;
int main()
{

    int const a = 10;
    const int b = 12;
    cout << a << endl;
    cout << b << endl;
    //*a=11;  not possible expression must be modifiable value
    //  int *p=&a;
    //  *p=1000;  This method works in prec=vious compiler 
    //But modern compiler not.
    //  cout<<a<<endl;   



    //const with pointers:
    
    

    return 0;
}
/*
    lvalue:Variable having Memory location.
    rvalue:Variable does not have memory location.



*/
