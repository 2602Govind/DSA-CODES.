#include<iostream>
using namespace std;
int main ()
 {
 	int n;
 	cin>>n;
 	
 	int row;
 	
 	while (row<=n)
 	{
 		//space print 
 		int space =n-row;
 		while(space )
 		{
 			cout<<" ";
 			space =space-1;
 			
		 }
		 //star print 
		 int colmn=1;
		 while (colmn<=row)
		 {
		 	cout<<"*";
		 	colmn=colmn+1;
		 }
		 cout<<endl;
		 row=row+1;
	 }
	 
 }
