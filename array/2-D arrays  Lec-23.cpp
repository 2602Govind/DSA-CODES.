#include <iostream>
using namespace std;

	bool isPresent(int arr[][4],int target,int i,int j)
	{
		return 1;
	}
int main()
{

	//int arr[3][4];
	
	int arr[3][4]={ { 11,33,4,55},{ 765,77,89,77},{ 64,33,23,55}};
	
	// takin element as input
/*	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>arr[i][j];
		}
	}
	*/
	
	//print
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j] <<" ";
		}
		cout<<endl;
	}
	cout<<"Enter the elemnt to search"<<endl;
	int target;
	cin>>target;
	
	if (isPresent(arr,target,3,4))
	{
		cout<<"Element found"<<endl;
		
	}
	else {
		cout<<"Element not found"<<endl;
	}
	
	return 0;
}
