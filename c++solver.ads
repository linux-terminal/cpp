#include <iostream>
using namespace std;
int main()
{
    float a,b,c,delta,x1,x2;
    cout << "ax^2+bx+c=0\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    delta=b*b-4*a*c;
    x1=(-b+delta)/(2*a);
    x2=(-b-delta)/(2*a);
    cout << "x1=" << x1 << "\n" << "x2=" << x2 <<endl;
    return 0;
}
