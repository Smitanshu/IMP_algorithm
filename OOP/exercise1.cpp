#include <bits/stdc++.h>
using namespace std;
/*
bool search(string str, char ch)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (tolower(str[i]) == tolower(ch))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string str = "A quick brown fox jumps over the lazy do g";
    string ans = "";
    bool isInserted = 0;
    for (char ch = 'A'; ch <= 'Z'; ch++)
    {
        if (search(str, ch) == 0)
        {
            ans += tolower(ch);
            isInserted = 1;
        }
    }
    if (isInserted == 0)
    {
        ans += "0";
    }
    cout << ans;
    return 0;
}

*/
// Exercise 2:
// if person age is les than 18 year then generate the exception.
// if greater than 18 years is eligible for vote

/*
int main()
{

    try
    {
        int age;
        cout << "Enter the age:";
        cin >> age;
        if (age >= 18)
        {
            cout << "Eligible for vote";
        }
        else
        {
            throw(age);
        }
    }
    catch (int age)
    {

        cout << "Not eligible for vote";
    }
    return 0;
}
*/

// wap read no from user if range is 3to 15  then no problem else throw exception

int main()
{

    try
    {
        int no;
        cout << "Enter number :";
        cin >> no;
        if (no >= 3 && no <= 15)
        {
            cout << "It is in range";
        }
        else
        {
            throw(no);
        }
    }

    catch (int no)
    {
        cout << "It is out of range" << endl;
    }

    return 0;
}
