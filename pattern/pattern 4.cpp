#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int row=1;
	
  
    while(row<=n)
    {
	int colmn=1;
		int value =row;
	while(colmn<=row)
	{
		cout<<value;
		colmn=colmn+1;
		value=value+1;
	}
	cout<<endl;
	row=row+1;
	}
}
