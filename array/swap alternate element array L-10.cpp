#include<iostream>
using namespace std;
 
 void printArray(int arr[],int n)
 {
 	for (int i=0;i<n;i++)
 	{
 		cout<<arr[i]<<endl;
	 }
 }
 void swapAlternate(int arr[] ,int size)
{
	for (int i=0;i<size;i+=2)
	{
		if(i+1<size){
			swap (arr[i],arr[i+1]);
		}
	}
}
int main()
{
	 int even[8]={12,56,67,77,78,5,54,43};
	 int odd[5]={34,56,78,90,99};
	 
	 swapAlternate(even,8);
	 printArray(even,8);
	 
	 swapAlternate(odd,8);
	 printArray(odd,8);
	 
}
