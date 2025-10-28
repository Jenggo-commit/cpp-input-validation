#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    
    cout <<  "Enter a single word: ";
    cin >> word;
    
    if (word.length()>5) //can be changed
    {
        cout << "That's a nice long word! Its length is " << word.length() << ".";
    }
    else
    {
        cout << "That word is a bit short. Its length is " << word.length() << ".";
    }
    
    return 0;
}
