#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Input a="<<endl;
	cin>>a;
	cout <<"Inputb="<<endl;
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"a="<<a<<" ; b="<<b;
	return 0;
}
