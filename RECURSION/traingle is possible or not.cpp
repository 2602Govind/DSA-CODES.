#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Give the value of a = ";
	cin>> a;
	cout<<"Give the value of b = ";
	cin>>b;
	cout<<"Give the value of c = ";
	cin>>c;
	
	 
	if((a+b>c)&&(b+c>a) &&(c+a>b)) 
	{ 
	cout<<" \n traingle is possible";
	}

	else
	{
		cout<<" \n traingle is not possible ";
	}
	 return 0;
}
