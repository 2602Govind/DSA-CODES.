#include<iostream>
using namespace std;

int binarySearch(int arr[],int size , int key){
	int start=0;
	int end=size-1;
	
	int mid=(start+end)/2;
	
	while(start<=end){
		if (arr[mid]==key)
		{
			return mid;
		}
		
		else if(key>arr[mid]){
			start=mid+1;
			mid=(start+end)/2;
		} 
		else{
			end=end-1;
			mid=(start+end)/2;
		}
		
			}
			return -1;
}

int main(){
	
	int even [8]={2,4,6,8,9,12,13,45};
	int odd[5]={2,6,51,56,65};
	
	int evenindex=binarySearch(even,8,12);
	cout<<" Index of 45 is  ;="<<evenindex;
	
	int oddindex=binarySearch(odd,5,65);
	cout<<" Index of 56 is  ;="<<oddindex;
	
	
	return 0;
}
