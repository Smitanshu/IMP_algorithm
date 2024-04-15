#include<iostream>
using namespace std;
//Empty class size is 1-byte
class Student {

    int marks;
    string name;
    int id;
    void study(){
        cout<<"Studying"<<endl;

    }
    void bunk(){
        cout<<"Bunking"<<endl;
    }
    void sleep(){

        cout<<"Sleeping"<<endl;
    }

};
int main(){

    Student s1;
    Student s2;
}