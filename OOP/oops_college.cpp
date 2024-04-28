#include <iostream>
using namespace std;
/*class Book
{

public:
    string name;
    string author;
    int page;
    Book(string _name, string _author, int _page)
    {

        name = _name;
        author = _author;
        page = _page;
    }
    void display()
    {
        cout << name << " " << author << "  " << page << "  ";
    }
};
int main()
{

    Book s1("Hooked", "Smitanshu", 199);
    s1.display();

    return 0;
} */

/*

//Account deposit and withdraw using multiple accounts Problems :
class Account
{
public:
    string name;
    int accNo;
    int balance;
    string address;
    Account(string _name, int _accNo, int _balance, string _address)
    {
        this->name = _name;
        this->accNo = _accNo;
        this->balance = _balance;
        this->address = _address;
    }

    void display()
    {
        cout << name << " " << accNo << "  " << balance << "  " << address << " " << endl;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
        cout << "Balance  after deposit:" << balance;
    }

    void withdraw(int amount)
    {
        balance = balance - amount;
        cout << "balance after withdrawn" << balance << endl;
        ;
    }
    void check_balance()
    {
        cout << "Available balance :" << balance << endl;
    }
};
int main()
{
    string name;
    int accNo;
    int balance;
    string address;

    int n;

    cout << "enter count of accounts " << endl;
    cin >> n;
    int i = 0;
    while (i <= n)
    {
        cout << "Enter name ";
        cin >> name;

        cout << "Enter account no:";
        cin >> accNo;

        cout << "Enter balance :";
        cin >> balance;

        cout << "Enter address :";
        cin >> address;
        Account a1(name, accNo, balance, address);
        a1.display();
        a1.check_balance();
        a1.deposit(1000);
        a1.check_balance();
        a1.withdraw(200);
        a1.check_balance();
        i = i + 1;
    }

    return 0;
}
*/

/*
the concept of  one class to another class directly lke s same class member is known as inheritance
is a relationship

->A class which is extended by another class is known as superclass or base class.
->A class which is extending another class is known as subclass are known as derived class.
->We can use  superclass properties  into subclass directly as subclass number.
->cpp supports 5 types of inheritance
  1.single level
  2.Multi level inheritance
  3.Hierarchical
  4.Multiple
  5.Hybrid Inheritance



1.Single-level inheritance:  Concept of inheriting properties of only  one class to another class
2. Multi-level Inheritance:Concept of inheriting properties multiple class into single class with the concept of one to another.
3.Hierarchical Inheritance:The concept of inheriting property of one class to multiple classes separately known as hierarchical inheritance
4.Multiple Inheritance:The concept of inheriting property from multiple classes into single class is known as multiple inheritance
5.Hybrid Inheritance :Collection of one or more inheritances is called as hybrid inheritance.
*/

// Single-level Inheritance:
/*
class A
{
public:
    int a;
    void m1()
    {
        cout << "Inside method m1() " << endl;
    }
};
class B : public A
{
public:
    int b;
    void m2()
    {
        cout << "Inside method m2()" << endl;
    }
    void insert()
    {
        a = 10;
        b = 15;
    }
    void display()
    {
        cout << a << " " << b << endl;
    }
};
class C : public B
{
public:
    int c;
};
int main()
{

    B y1;
    y1.m1();
    y1.m2();
    y1.insert();
    y1.display();
    return 0;
}
*/

/*
class A
{
public:
    void display1()
    {
        cout << "in class A";
    }
};
class B
{
public:
    void display()
    {
        cout << "in class B";
    }
};
class C : public A, public B
{
};
int main()
{
    C obj;
    obj.display();
    return 0;
}
*/

class A
{

protected:
    int id_protected;
};
class B : public A
{
public:
    void set_id(int _id)
    {
        id_protected = _id;
    }
    void display()
    {
        cout << "Id is :" << id_protected;
    }
};
int main()

{
    B obj;
    obj.set_id(50);
    obj.display();

    return 0;
}