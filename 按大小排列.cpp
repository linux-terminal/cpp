#include <iostream>
using namespace std;
int main ()
{
	const int size=1000;
	int nums[size];
	int n;
	cout<<"How many numbers"<<endl;
	cin>>n;
	for (int i=1;i<=n;++i)//�������� 
	cin>>nums[i];
	for (int k=1;k<=n-1;++k)//�ȴ�С
	for (int q=1;q<=n-k;++q)
		{
		if (nums[q]<nums[q+1])
		swap (nums[q],nums[q+1]);
		}
	for (int m=1;m<=n;m++)//��� 
	cout<<nums[m];
	return 0;
}
