#include <iostream>
using namespace std;
int main ()
{
	const int len=100;
	int a[len];
	for (int i=2;i<=100;++i)
	{
		a[i]=0;
		for (int j=2;j<i;++j)
		{
			if (i%j!=0)
			a[i]=i;
		}
	}
	for(int k=2;k<=100;++k)
	{
		if (a[k]!=0)
		cout<<a[k]<<endl;
	}
	return 0;
}
