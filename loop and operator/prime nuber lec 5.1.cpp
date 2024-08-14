#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n ";
	cin>>n;
	bool isprime=1;
	for(int i=2;i<n;i++)
	{
	if(n%1==0)
	{
		isprime=0;
			break;
		
	}

}
if (isprime==0) {
	cout<<"not  a prime number";
	
}
else {
	cout<<"is a prime number";
}
}
