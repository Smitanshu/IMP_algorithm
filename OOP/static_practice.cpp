#include <iostream>
using namespace std;
// // class demo
// // {
// //     static int a;
// //     int b;

// // public:
// //     void insert()
// //     {
// //         b = 5;
// //     }
// //     void display()
// //     {
// //         cout << a << " " << b << endl;
// //     }

// //     void modify()
// //     {

// //         a = a + 1;
// //         b = b + 1;
// //     }
// // };
// // int demo::a = 10;
// class demo
// {
// public:
//     static void add(int a, int b)
//     {
//         int c = a + b;
//         cout << "Sum" << c << endl;
//     }

//     static int mul(int a, int b)
//     {

//         return a * b;
//     }
// };
// int main()
// {

//     // demo d1;
//     // d1.insert();
//     // d1.display();
//     // d1.modify();
//     // d1.display();
//     // demo d2;
//     // d2.insert();
//     // d2.display();

//     // d2.modify();
//     // d2.display();

//     demo::add(10, 5);  ///Without creating object we can call static methods
//     cout<<"Multiplication :" << demo::mul(5, 3);

//     return 0;

// }

class demo
{
public:
    static void square(int a)
    {
        int c = a * a;
        cout << "Square :" << c;
    }

    static int cube(int b)
    {
        return b * b * b;
    }
};
int main()
{
    demo::square(9);
    cout << endl;
    cout << demo::cube(3) << endl;
}

/*c++ supports two type of ctor 1.Default , parameterized
1.Default ctor: during creation of object we are not passing any data thats why its called as default ctor
*/