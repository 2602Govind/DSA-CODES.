#include<iostream>
using namespace std;


int& func(int a)
{
	int num =a;
	
	int& ans =num;
	 return ans;
}
   void update2(int& n)
  {
  	n++;
  }
  void update1(int n)
  {
  	n++;
  }
int main ()
{
/*	int i=5;
	//create a new refrene variable 
	int& j=i;
	
	cout<<i<<endl;
	i++;
	cout<<j<<endl;
	j++;
	
	cout<<i;*/
	 int n=5;
	cout<<"before "<<n<<endl;
	
	update2(n);
	cout<<"after "<<n<<endl;
	
	 func(n);
	
}
