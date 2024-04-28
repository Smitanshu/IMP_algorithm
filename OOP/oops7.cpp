#include <iostream>
using namespace std;
class Bird
{
public:
    string name;
    int age;
    int legs;
    char sex;

    Bird()
    {
        cout << "Default CTOR called" << endl;
    }
    // Parameterized ctor:
    Bird(string _name, int _age, int _legs, char _sex)
    {

        this->name = _name;
        this->age = _age;
        this->legs = _legs;
        this->sex = _sex;
    }
};

class Sparrow : public Bird
{
public:
    Sparrow()
    {
        cout << "Default ctor  called" << endl;
    }
};

class Pigeon : public Bird
{
public:
    Pigeon()
    {
        cout << "Default ctor called" << endl;
    }
};
int main()
{
    Bird s1{"chimani", 2, 2, 'M'};
    cout << s1.name << endl;

    return 0;
}
