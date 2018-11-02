#include <iostream>
using namespace std;
const int MAXN=10000;
int main()
{
	int a[MAXN];
	int maxa,n;
	cout<<"How many numbers"<<endl;
	cin>>n;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	for (int k=1;k<=n;k++)
		{
		maxa=a[1];
		if (maxa<=a[k])
		maxa=a[k];
	}
		cout<<maxa<<endl;
		return 0;		
}
