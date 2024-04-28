#include <iostream>
using namespace std;
class Bird
{
public:
    string name;
    int age;
    bool eat;
    int legs;
    string color;
};
class Sparrow : public Bird // Inheritance
{                           // Now we can access all the data members of ParentClass Bird.
public:
    void chiv()
    {
        cout << "Sparrow is chiv-chiv" << endl;
    }
    // Paremetrized CTOR:
    Sparrow(string _name, int _age, bool _eat, int _legs, string _color)
    {
        name = _name;
        this->age = _age;
        this->eat = _eat;
        legs = _legs;
        color = _color;
    }
};
class pigeon : public Bird // Inheritance
{
public:
    void guttering()
    {
        cout << "Pigeon is guttering" << endl;
    }
};
int main()
{
    Sparrow c1{"Chimani", 1, 1, 2, "brown"};
    cout << c1.name << endl;
    cout << c1.age << endl;
    cout << c1.eat << endl;
    cout << c1.color << endl;
    cout << c1.legs << endl;

    return 0;
}
