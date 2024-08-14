//  given  two numbers  p and q   ,find  the  value of p^q   using a recursive function 

#include<iostream>
using namespace std;

int f( int p, int q)
{
	if(q==0) return 1;
	return p*f(p,q-1);
	
}
 int main()
 {
 	//iterative APPROACH
 	
 	/*
	 int p ,q;
    int ans=1;
    cout<<" enter the value of p";
	cin>>p;
	cout<<" enter the value of q";
    cin>>q;
    for(int i=1;i<=q;i++){
    	
    	ans=ans*p;
	}

	 cout <<"the power p^q is "<<ans;*/
	 
	 //RECURSIVE APPROACH
	 
	 	  int result=f(5,2);
	 	  cout<<" the power p^q is"<<result;
 }
