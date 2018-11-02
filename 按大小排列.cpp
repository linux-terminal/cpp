#include <iostream>
using namespace std;
int main ()
{
	const int size=1000;
	int nums[size];
	int n;
	cout<<"How many numbers"<<endl;
	cin>>n;
	for (int i=1;i<=n;++i)//输入数组 
	cin>>nums[i];
	for (int k=1;k<=n-1;++k)//比大小
	for (int q=1;q<=n-k;++q)
		{
		if (nums[q]<nums[q+1])
		swap (nums[q],nums[q+1]);
		}
	for (int m=1;m<=n;m++)//输出 
	cout<<nums[m];
	return 0;
}
