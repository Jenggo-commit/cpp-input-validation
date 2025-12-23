#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, z;
    cout<<"Enter leg A: ";
    cin >> x;
    
    cout << "Enter leg B: ";
    cin >> y;
    
    x = pow(x, 2);
    y = pow(y, 2);
    z = sqrt(x + y);
    
    cout << "The Hypotenuse: " << z;
    
    return 0;
}
