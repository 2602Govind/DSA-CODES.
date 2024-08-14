#include<iostream>
using namespace std;
bool search(int arr[],int size,int target)

{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
 int  arr[12]={12,344,56,67,-5,67,54,445,5};
 cout<<" Enter the value to search";
 int target;
 cin>>target;
 
 bool found=search(arr,10,target);
 if (found)
 {
 	cout<<"TARGet is present\n";
 }
 else
 {
 	cout<< " Target is not present";
 }
return 0;;

}
