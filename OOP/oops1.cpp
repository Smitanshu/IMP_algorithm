#include <iostream>
using namespace std;
// //Empty class size is 1-byte
// //Object is an instance of class
// //Class:User defined datatype

// class Student {

//     int marks;
//     bool name;
//     int id;
//     void study(){
//         cout<<"Studying"<<endl;

//     }
//     void bunk(){
//         cout<<"Bunking"<<endl;
//     }
//     void sleep(){

//         cout<<"Sleeping"<<endl;
//     }

// };
// int main(){

//     Student s1;
//     Student s2;
//     cout<<sizeof(Student)<<endl;
//     //Gives 1 byte when Class is empty
//     return 0;
// }

// case1:
/*
#include<iostream>
using namespace std;
class Student {
    int marks; //4
    bool name;//1
    int id;//4
};
int main(){

    Student s1;
    Student s2;
    cout<<sizeof(Student)<<endl;
    //It gives 12 due to padding  occurs in new compiler.
    //(4+1+4+(3)<--padding=12)
    //It waste memory but we require fast process
    // it takes more time to remove 1 byte specially but it can fetch 4 byte easily.
    return 0;
}

*/
// class Student
// {
//     double marks;// It give (8+8+1+1+(6))==24;
//     double id;
//     char a;
//     bool b;
//     //or Align the sum of datatype in the boundary of largest datatype
//     // Basically it takes the nearest multiple if larger size datatype.
// };
// int main(){
//     cout<<sizeof(Student)<<endl;
// }

class Student
{
    string name; // 24
    int a;       // It give (24+4+4+4+1)=37  37<48
    int b;       // therefor   padding=11;
    int c;
    bool value;
};
int main()
{
    cout << sizeof(Student) << endl; // 48
}