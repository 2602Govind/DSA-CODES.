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
		
	while(colmn<=row)
	{
		cout<<row+colmn-1;
		colmn=colmn+1;
		
	}
	cout<<endl;
	row=row+1;
	}
}

//its reverse
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
		
	while(colmn<=row)
	{
		cout<<row-colmn+1;
		colmn=colmn+1;
		
	}
	cout<<endl;
	row=row+1;
	}
}
