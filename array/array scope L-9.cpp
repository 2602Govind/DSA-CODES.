#include<iostream>
using namespace std;
 void update(int arr[] ,int n)
 {
 	arr[0]=120;
    for (int i=0;i<3;i++)
    {
    	cout<<arr[i]<<" ";
	}
  }
   
int main()
{
int arr[3]={1,76,87};
update (arr,3);
cout<<"Printing in main function";
 for (int i=0;i<3;i++)
    {
    	cout<<arr[i]<<" ";
	}
}
