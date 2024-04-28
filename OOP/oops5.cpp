// Theory of Object oriented programming:
#include <iostream>
using namespace std;
class Temp
{
};
int main()
{

    return 0;
}
/*
Pillars of OOPS:  main pillar={Abstraction}, {Loose coupling};

1.Abstraction:Implementation details are hide is called abstraction.
->Ex:We dont care the implementation of ATM,like HOW ?, what ?,   why?.
->part of abstraction is called loose coupling:


2.Encapsulation:Encapsulation is often mean to achieve abstraction  by hiding internal details
and only exposing what is  necessary.

->Wrapping or bundling of data and methods.
->It is a way to achieve  or implement abstraction.
->Why:
    Easy to handle
    Protect integrity.
    control how class data is modified.
->Perfect Encapsulation:If all data members are private.
     Through getter /setter we can access.



3.Inheritance:
->  SuperClass || ParentClass|| BaseClass
       ->>>>>>>
       ->>>>>>>
       subClass || childClass || DerivedClass

->Syntax:
    class Child_Name :Mode_of_Inheritance Parent_Name{....}
    where:Mode_of_Inheritance=public, private, protected.

->Code Reusable, increase code extensibility.


Note:Access modifier
protected:Members which are in protected can accessible within its class and its derived class.
->It can inherit.

private:Members which are declared in private are accessible within class only.
->It can'st Inherit.
->privacy managed by the private access specify only.



Types of Inheritance:
1.Single Inheritance:{ Bird-->Sparrow   };
->in this "Is a" relation present.

2.Multilevel Inheritance /Multilevel Inheritance:{Fruit<---Mango<---Alphanzo}
 {Person<---employee<---Manager}.

3.Hierarchical Inheritance:
->{
     Animal-->>{Dog, Cat}
                 |    |
                 |    |
                 |    |
                 |    >>{Black, White, Desi, Jungle};
                 >>{Desi, Labra, German, vodafone};

}


4.Multiple Inheritance:Derived class Inherits from more than one class.
->Not possible in Java.
  {                      |---->Researcher.
    Teacher<----Professor|

    }



*/