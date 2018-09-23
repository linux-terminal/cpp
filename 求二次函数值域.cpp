#include <iostream>
using namespace std;
int main ()
{
    int a,b,c,h,k,m,n,f1,f2;
    cout << "f(x)=ax^2+bx+c\n";
    cout << "a=";
    cin >> a;
    cout << "b=";
    cin >> b;
    cout << "c=";
    cin >> c;
    h=-(2*a)/b;
    k=(4*a*c-b^2)/(4*a);
    cout << "输入定义域[m,n]";
    cout << "m=";
    cin >> m;
    cout << "n=";
    cin >> n;
    f1=a*m^2+b*m+c;
    f2=a*n^2+b*n+c;

    if (m-h>=0)
    {
        if (a>0)
        {
            cout << "值域[" << f1 << "," <<f2 << "]" << endl;
        }
        else if (a<0)
        {
            cout << "值域[" << f2 << "," << f1 << endl;
        }
    }

    else if (m-h<0)
    {
        if (a>0)
        {
            if (h-m>=n-h)
            {
                cout <<"值域[" << k << "," <<f1 << "]" << endl;
            }
            else if (h-m<n-h)
            {
                cout << "值域[" << k << "," <<f2 << "]" << endl;
            }
        }
        else if (a<0)
        {
                  if (h-m>=n-h)
            {
                cout <<"值域[" << f2 << "," << k << "]" << endl;
            }
            else if (h-m<n-h)
            {
                cout << "值域[" << f1 << "," << k << "]" << endl;
            }
        }
    }
}
