#include <iostream>
#include <string>
#include <sstream>
#include <limits>
using namespace std;

int main ()
{
    int age;
    string name;
    bool st = 0, st2 = 0;
    
    do {
    cout << "Enter your Name: ";
    getline(cin, name);
    
        if (name.empty())
        {
            cout << "Invalid. You Name can't be empty!\n";
            !st;
        }
        else
        {
            cout << "Hello! " << name;
            st = 1;
        }
    } while (!st);
    
    do {
    cout << "\n\nEnter your Age " << name << ": ";
    cin >> age;
    
        if (cin.fail())
        {
            cout << "Invalid. Enter a Valid Age!";
            cin.ignore(numeric_limits<int>::max());
            cin.clear();
            !st2;
        }
        else
        {
            cout << "Woah, you're " << age << " years old!\n";
            
            if (age >= 18)
            {
                cout << "You're getting old " << name;
                st2 = 1;
            }
            else
            {
                cout << "Still a kid huh? " << name;
                st2 = 1;
            }
        }
    } while (!st2);
    
    return 0;
}
