#include<iostream>
using namespace std;
int f(int p,int q)
{
	
	if(p==0 ) return 1;
	if(q%2==0)
	{
		///if q is even 
		int result =f(p,q/2);
		return result*result ;
		
	}
	else {
		// if q is odd 
		int result=f(p,(q-1)/2);
		return result *result ;
	}
}
int main(){
	
	
	int res =f(2,3);
cout<<"the result is "<<res;
	return 0;
	 }
	 // time complexity=O(log q);
