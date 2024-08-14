//find    out the   sum of its  digit using recursion


#include<iostream>
using namespace std;

int f(int n)
{
	//base case 
	if(n<=9 and n>=0) return n;
	return f(n/10)+(n%10);
	
}
int main()
{
  	
	int result =f(55433);
	cout<<result;
	return 0;
}
