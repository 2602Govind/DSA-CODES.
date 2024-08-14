 #include<iostream>
using namespace std;
void reverse(int arr[],int n){

 int start=0;
 int end=n-1;
 
 while(start<=end){
 	swap (arr[start],arr[end]);
 	start++;
 	end--;
 }
}
void printArray(int arr[],int n){
	for ( int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
int arr[7]={23,5,6,64,843,9};
int brr[5]={45,89,87,55,76};

reverse(arr,6);
reverse (brr,5);


printArray(arr,6);
cout<<endl;
printArray(brr ,5);
}

