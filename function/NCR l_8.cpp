#include<iostream >
using namespace std;
 
 int factorial (int n)
 {
 	int factorial=1;
 	for( int i=1;i<=n;i++){
 		factorial=factorial*i;
	 }
	 return factorial;
 }
 
 int nCr( int n ,int r)
 {
 	int  numr=factorial( n);
 	int denom=factorial(r)* factorial(n-r);
    int ans=numr/denom;
    return ans;
 }
 int main ()
{	
	int n,r;
	cin>>n>>r;
	cout<<"Answer is"<<nCr(n,r);
	return 0;
}
